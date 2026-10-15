/*Create a class to demonstrate Multilevel inheritance*/
#include<iostream>
class Person{
    public:
    std::string name;

    Person(std::string c_name){
        this->name = c_name;
    }
    

};
class Employee :public Person{
    public:
    int emp_ID;

    Employee(int c_emp_ID, std::string c_name):Person(c_name){
        this->emp_ID = c_emp_ID;

    }
};
class Manager:public Employee{
    public:
    std::string dept;
    //member functions//
    Manager(std::string c_name , int c_emp_id , std::string c_dept  ):Employee(c_emp_id , c_name){
        this->dept = c_dept;
    }

    void display(){
        std::cout<<"Name of the student: "<<name<<"\n";
        std::cout<<"Employee Id: "<<emp_ID<<"\n";
        std::cout<<"Dept of "<<name<< " :"<<dept<<"\n";


    }

};
int main(){
    Manager A("Kartikai" , 205, "System Programming");
    A.display();
 
 
 
}