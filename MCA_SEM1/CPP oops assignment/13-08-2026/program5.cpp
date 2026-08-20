/*
Differentiate between private and public access/scope. Perform the question no. 4 with 
class instead of structure with having the data members private and 
some member functions in private scope and some in public scope. 

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
class Student{
    private:
    string name;
    int rollno;
    string Hostel;
    string Degree;+
    float currentCgpa;

    //constructor//
    public:
    Student(string c_name , int c_rollno, string c_Degree, string c_Hostel , float c_currentCgpa){
        this->name = c_name;
        this->rollno = c_rollno;
        this->Degree = c_Degree;
        this->Hostel = c_Hostel;
        this->currentCgpa = c_currentCgpa;
    }
    //member functions//
    
    public:
    void update_details(){
        cout<<"Update your name: ";
        string newname;
        cin>>newname;
        name = newname;
    }
    void updateCgpa(){
        cout<<"Your Current Cgpa is : "<<currentCgpa<<endl;
        cout<<"Enter your new CGPA: ";
        float newCgpa;
        cin>>newCgpa;

        currentCgpa = newCgpa;

    }
        void updateHostel(){
        cout<<"Your Current Hostel is : "<<Hostel<<endl;
        cout<<"Enter your new Hostel: ";
        string newHostel;
        cin>>newHostel;

        Hostel = newHostel;
        
    }
       void displaydetails(){
        cout<<"Your all details: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Hostel: "<<Hostel<<endl;
        cout<<"Degree: "<<Degree<<endl;
        cout<<"Current Cgpa: "<<currentCgpa<<endl;
       }


};
int main(){
    Student A("Kartikai" , 55, "MCA" , "PG" , 8.9);
    A.displaydetails();
 
 
 
}