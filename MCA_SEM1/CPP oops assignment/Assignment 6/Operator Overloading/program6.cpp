/*
6. Create a class Student with a data member CGPA. Create two student objects
and overload the following relational operators:
 == to check whether both students have the same CGPA.
 > to check which student has the higher CGPA.
Display an appropriate message based on the comparison.
*/
#include <iostream>
using namespace std;

class Student {
public:
    double CGPA;

    // Parameterized constructor
    Student(double num) {
        this->CGPA = num;
    }

    // Overload == operator
    bool operator==(const Student& B) const {
        return this->CGPA == B.CGPA;
    }

    // Overload > operator
    bool operator>(const Student& B) const {
        return this->CGPA > B.CGPA;
    }
};

int main() {
    Student A(8.5);
    Student B(5.8);
    Student C(8.5);

    // Compare A and B
    if (A > B) {
        cout << "Student A has higher CGPA.\n";
    }
    else if (B > A) {
        cout << "Student B has higher CGPA.\n";
    }
    else {
        cout << "Both students have the same CGPA.\n";
    }

    // Compare A and C
    if (A == C) {
        cout << "CGPA of both students is same.\n";
    }
    else {
        cout << "CGPA of both students is different.\n";
    }

    return 0;
}