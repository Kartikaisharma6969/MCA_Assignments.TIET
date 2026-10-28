/*Assignment 1*/


/*Q1. 1. Create table Student (Rno, Name, DOB, Gender, Class, College,
City, Marks) */
create Table Student(
    Rollno Number,
    Name VARCHAR2(20),
    DOB DATE,
    Gender  VARCHAR2(10),
    Class VARCHAR2(10),
    College VARCHAR2(30),
    City VARCHAR2(20),
    Marks FLOAT
);

/*2. Insert 5 records in student table*/
insert INTO  Student values(10 , 'Kartikai' , DATE '2004-05-10','A', 'Thapar', 'Patiala' , 98.9);
insert INTO  Student values(20 , 'Nitish' , DATE '2005-09-20','Ab', 'UNA GS', 'Una' , 78.9);
insert INTO  Student values(30 , 'Naman' , DATE '2004-05-10','A', 'Cu', 'Chandigarh' , 56.9);
insert INTO  Student values(8 , 'Akshay' , DATE '2004-05-10','t', 'LPU', 'Ludhinyana' , 21.9);
insert INTO  Student values(14 , 'Harsh' , DATE '2004-05-10','A', 'UNA college', 'UNA' , 78.9);
insert INTO  Student values(67 , 'Abhay' , DATE '2004-05-10','C', 'HPU ', 'Shimla' , 81.9);