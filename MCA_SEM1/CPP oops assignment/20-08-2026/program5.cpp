/*
5. Write a program to demonstrate constructor overloading using a class Student. Create:
 a default constructor,
 a constructor accepting name and roll number,
 a constructor accepting name, roll number, and CGPA.
Display the details of objects created using all three constructors.
*/
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float CGPA;

    public:
    Student(){
        cout<<"Constructor 1 is called..."<<endl;
        string c_name;
        cout<<"Enter the name: ";
        cin>>c_name;
        this->name = c_name;

        int c_rollno;

        cout<<"Enter the rollno: ";
        cin>>c_rollno;
        this->rollno = c_rollno;

    }
    Student(string c_name , int c_rollno){
                cout<<"Constructor 2 is called..."<<endl;

        this->name = c_name;
        this->rollno = c_rollno;

    }

    Student(string c_name , int c_rollno , float c_cgpa){
                cout<<"Constructor 3 is called..."<<endl;

        this->name = c_name;
        this->rollno = c_rollno;
        this->CGPA = c_cgpa;

    }

};
int main(){
    Student A;
    Student B("Kartikai" , 55);
    Student C("Kartikai", 55, 9.5);
 
 
 
}