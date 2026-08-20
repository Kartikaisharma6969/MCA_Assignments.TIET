/*
3. Write a C++ program to create a class Employee with data members name, id, and salary.
Initialize the data members using a parameterized constructor and display the employee
details.

*/
#include<iostream>
using namespace std;
class Employee{
    public:
    //data//
    string name;
    int id;
    float salary;
    //constructor call//

    Employee(string c_name, int c_id , float c_salary){
        this->name = c_name;
        this-> id = c_id;
        this->salary = c_salary;


    }

    void displayDetailsEmployee(){
        cout<<"Employee name is: "<<name<<endl;
        cout<<"Employee ID :"<<id<<endl;
        cout<<"Employee salary is: "<<salary<<endl;


    }
    

};
int main(){
    Employee A("Kartikai" , 23, 80000);
    A.displayDetailsEmployee();

 
 
 
}