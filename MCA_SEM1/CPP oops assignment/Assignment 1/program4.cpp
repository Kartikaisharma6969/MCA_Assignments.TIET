/*
4. Create a structure in C++ containing the details of Students as details below and a main function to execute the structure.  
Data Members(properties): 
Name 
Roll No
 Degree
  Hostel
   CurrentCGPA 
Member Function(behavior):
 addDetails(); updateDetails(); updateCGPA(); updateHostel(); displaydetails(); 
*/
#include<iostream>
using namespace std;
int main(){
    struct Student
    {
        //properties/
        string name;
        int rollno;
        char Hostel;
        float CurrentCgpa;




        //member functions//
        void addDetails(string f_name,int f_rollno,char f_hostel , float f_currentcgpa){
            this->name =f_name;
            this->rollno = f_rollno;
            this->Hostel = f_hostel;
            this->CurrentCgpa = f_currentcgpa;

        }

        };
    
 
 
 
}