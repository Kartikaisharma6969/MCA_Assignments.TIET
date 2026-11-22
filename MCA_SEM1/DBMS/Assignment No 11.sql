/*Assignment no 11*/

/*Q1.*/

CREATE TABLE Student (
    roll_no NUMBER PRIMARY KEY,
    name VARCHAR2(50),
    age NUMBER
);

CREATE TABLE Student_minor (
    roll_no NUMBER PRIMARY KEY,
    name VARCHAR2(50),
    age NUMBER
);

INSERT INTO Student VALUES (101, 'Aman', 22);
INSERT INTO Student VALUES (102, 'Rahul', 26);
INSERT INTO Student VALUES (103, 'Simran', 21);
INSERT INTO Student VALUES (104, 'Karan', 28);
INSERT INTO Student VALUES (105, 'Neha', 24);
INSERT INTO Student VALUES (106, 'Riya', 25);

COMMIT;


SELECT * FROM Student;



ALTER TABLE Student ADD (
    marks1 NUMBER DEFAULT 0,
    marks2 NUMBER DEFAULT 0,
    marks3 NUMBER DEFAULT 0,
    total NUMBER DEFAULT 0
);



UPDATE Student SET marks1 = 30, marks2 = 35, marks3 = 40 WHERE roll_no = 101;
UPDATE Student SET marks1 = 25, marks2 = 30, marks3 = 35 WHERE roll_no = 102;
UPDATE Student SET marks1 = 40, marks2 = 45, marks3 = 35 WHERE roll_no = 103;
UPDATE Student SET marks1 = 20, marks2 = 25, marks3 = 30 WHERE roll_no = 104;
UPDATE Student SET marks1 = 45, marks2 = 40, marks3 = 48 WHERE roll_no = 105;
UPDATE Student SET marks1 = 35, marks2 = 38, marks3 = 42 WHERE roll_no = 106;

COMMIT;
/*Q2*/

DECLARE
    CURSOR c_student IS
        SELECT * FROM Student WHERE age < 25;

    v_student Student%ROWTYPE;

BEGIN
    OPEN c_student;

    LOOP
        FETCH c_student INTO v_student;
        EXIT WHEN c_student%NOTFOUND;

        INSERT INTO Student_minor
        VALUES (v_student.roll_no, v_student.name, v_student.age);

        DELETE FROM Student
        WHERE roll_no = v_student.roll_no;

    END LOOP;

    CLOSE c_student;

    COMMIT;
END;
/

/*Q2*/
/*2. Write a pl/sql code using cursor, which will find the total marks of each
student and update the total column (assume that initially, the total is zero
for all the students).*/


DECLARE
    CURSOR c_student IS
        SELECT roll_no, marks1, marks2, marks3
        FROM Student;

    v_student c_student%ROWTYPE;
    v_total NUMBER;

BEGIN
    OPEN c_student;

    LOOP
        FETCH c_student INTO v_student;

        EXIT WHEN c_student%NOTFOUND;

        v_total := v_student.marks1 + v_student.marks2 + v_student.marks3;

        UPDATE Student
        SET total = v_total
        WHERE roll_no = v_student.roll_no;

    END LOOP;

    CLOSE c_student;

    COMMIT;
END;
/

/*Q3 3. Write a pl/sql code using cursor to find out how many students are there
whose total marks are greater than 90, and then display their details.*/
SET SERVEROUTPUT ON;

DECLARE
    CURSOR c_student IS
        SELECT * FROM Student WHERE total > 90;

    v_student c_student%ROWTYPE;
    v_count NUMBER := 0;

BEGIN
    OPEN c_student;

    LOOP
        FETCH c_student INTO v_student;

        EXIT WHEN c_student%NOTFOUND;

        v_count := v_count + 1;

        DBMS_OUTPUT.PUT_LINE('Roll No: ' || v_student.roll_no);
        DBMS_OUTPUT.PUT_LINE('Name: ' || v_student.name);
        DBMS_OUTPUT.PUT_LINE('Total Marks: ' || v_student.total);
        DBMS_OUTPUT.PUT_LINE('-----------------------');

    END LOOP;

    CLOSE c_student;

    DBMS_OUTPUT.PUT_LINE('Total students scoring above 90: ' || v_count);

END;
/

/*Q4  Write a pl/sql code using cursor to find the highest and lowest marks and
display the corresponding student’s details.*/

SET SERVEROUTPUT ON;

DECLARE
    CURSOR c_student IS
        SELECT roll_no, name, total FROM Student;

    v_student c_student%ROWTYPE;

    v_max NUMBER := -999999;
    v_min NUMBER := 999999;

    v_max_roll NUMBER;
    v_min_roll NUMBER;

    v_max_name VARCHAR2(50);
    v_min_name VARCHAR2(50);

BEGIN
    OPEN c_student;

    LOOP
        FETCH c_student INTO v_student;

        EXIT WHEN c_student%NOTFOUND;

        IF v_student.total > v_max THEN
            v_max := v_student.total;
            v_max_roll := v_student.roll_no;
            v_max_name := vstudent.name;

        END IF;

        IF v_student.total < v_min THEN
              v_min := v_student.total;
               v_min_roll := v_student.roll_no;
                v_min_name := v_student.name;
        END IF;

    END LOOP;

    CLOSE c_student;

    DBMS_OUTPUT.PUT_LINE('Highest Marks: ' || v_max);
    DBMS_OUTPUT.PUT_LINE('Student Roll No: ' || v_max_roll);
    DBMS_OUTPUT.PUT_LINE('Student Name: ' || v_max_name);

    DBMS_OUTPUT.PUT_LINE('-----------------------');

    DBMS_OUTPUT.PUT_LINE('Lowest Marks: ' || v_min);
    DBMS_OUTPUT.PUT_LINE('Student Roll No: ' || v_min_roll);
    DBMS_OUTPUT.PUT_LINE('Student Name: ' || v_min_name);

END;
/

/*Q5 Write a pl/sql code using cursor to find the average mark of all the students
and display it on the screen.*/

SET SERVEROUTPUT ON;

DECLARE
    CURSOR c_student IS
        SELECT total FROM Student;

    v_student c_student%ROWTYPE;

    v_sum NUMBER := 0;
    v_count NUMBER := 0;
    v_avg NUMBER;

BEGIN
    OPEN c_student;

    LOOP
        FETCH c_student INTO v_student;

        EXIT WHEN c_student%NOTFOUND;

        v_sum := v_sum + v_student.total;
        v_count := v_count + 1;

    END LOOP;

    CLOSE c_student;

    IF v_count > 0 THEN
        v_avg := v_sum / v_count;

        DBMS_OUTPUT.PUT_LINE('Total Students: ' || v_count);
        DBMS_OUTPUT.PUT_LINE('Sum of Marks: ' || v_sum);
        DBMS_OUTPUT.PUT_LINE('Average Marks: ' || ROUND(v_avg, 2));
    ELSE
        DBMS_OUTPUT.PUT_LINE('No student records found.');
    END IF;

END;
/
/*Q6. Write a stored procedure using a parameterized cursor, which will display
the student details whose rollno is passing as a parameter to the cursor from
the stored procedure.*/



SET SERVEROUTPUT ON;

CREATE OR REPLACE PROCEDURE show_student(p_roll_no NUMBER)
IS
    CURSOR c_student(p_roll NUMBER) IS
        SELECT * FROM Student
        WHERE roll_no = p_roll;

    v_student c_student%ROWTYPE;

BEGIN
    OPEN c_student(p_roll_no);

    FETCH c_student INTO v_student;

    IF c_student%FOUND THEN
        DBMS_OUTPUT.PUT_LINE('Roll No: ' || v_student.roll_no);
        DBMS_OUTPUT.PUT_LINE('Name: ' || v_student.name);
        DBMS_OUTPUT.PUT_LINE('Age: ' || v_student.age);
        DBMS_OUTPUT.PUT_LINE('Marks 1: ' || v_student.marks1);
        DBMS_OUTPUT.PUT_LINE('Marks 2: ' || v_student.marks2);
        DBMS_OUTPUT.PUT_LINE('Marks 3: ' || v_student.marks3);
        DBMS_OUTPUT.PUT_LINE('Total: ' || v_student.total);
    ELSE
        DBMS_OUTPUT.PUT_LINE('Student not found.');
    END IF;

    CLOSE c_student;

END;

/




/*Now from here Consider the 
table EMP (empno, ename, job, sal, deptno) (For Q7 to Q10)*/
Create TABLE EMP(
    emp_no NUMBER PRIMARY KEY,
    ename VARCHAR2(50),
    sal FLOAT,
    deptno NUMBER
);

INSERT INTO EMP VALUES (101, 'Amit', 'MANAGER', 50000, 10);
INSERT INTO EMP VALUES (102, 'Rahul', 'CLERK', 25000, 20);
INSERT INTO EMP VALUES (103, 'Neha', 'ANALYST', 45000, 10);
INSERT INTO EMP VALUES (104, 'Simran', 'SALESMAN', 30000, 30);
INSERT INTO EMP VALUES (105, 'Karan', 'CLERK', 22000, 20);
INSERT INTO EMP VALUES (106, 'Riya', 'MANAGER', 60000, 30);
INSERT INTO EMP VALUES (107, 'Arjun', 'ANALYST', 48000, 10);
INSERT INTO EMP VALUES (108, 'Priya', 'SALESMAN', 35000, 30);
INSERT INTO EMP VALUES (109, 'Vikas', 'CLERK', 28000, 40);
INSERT INTO EMP VALUES (110, 'Anjali', 'MANAGER', 55000, 40);

COMMIT;
SELECT *from EMP;

/*Q7 . Write a PL/SQL code to demonstrate %TYPE and %ROWTYPE to display
details of employees in EMP table.*/