/*
1. Write a C++ program to create a class Student with data members name and
rollNo. Use a default constructor to initialize these values and display the
student details.*/

#include<iostream>
using namespace std;
class Student{
    //properties//
    public:

    string name;
    int rollno;

    public:
    Student(){
        cout<<"Enter the name: ";
        string c_name;
        
        cin>>c_name;
        this->name = c_name;


        cout<<"Enter the rollno: ";
        int c_rollno;
        cin>>c_rollno;
        this->rollno = c_rollno;

    }

    //methods//
    void displaystudentdetails(){
        cout<<"Student name is: "<<name<<endl;
        cout<<"Student rollno is: "<<rollno<<endl;
    }




};
int main(){
    Student A;
    A.displaystudentdetails();

 
 
 
}