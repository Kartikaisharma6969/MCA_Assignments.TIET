/*
5. Create a base class College with a constructor that initializes the College
Name. Create a derived class Department with a constructor that initializes
the Department Name.
Create an object of the derived class and display both college and department
information to show the order of constructor execution.
*/
#include<iostream>
class College{
    public:
    std::string name;
    College(std::string n){
        std::cout<<"Constructor of College called (Base class)..\n";
        this->name = n;
    }

    ~College(){
        std::cout<<"Destructor of College called (Base class)..\n";

    }

};
class Department: public College{
    public:
    std::string dept_name;
    Department(std::string n , std:: string dep_n):College(n){
        std::cout<<"Constructor of Departement called (Derived class)..\n";


        this->dept_name = dep_n;
    }

    void display(){
        std::cout<<"Name of College: "<<name<<"\n";
        std::cout<<"Name of Department: "<<dept_name<<"\n";
    }
    ~Department(){
                std::cout<<"Destructor of Departement called (Derived class)..\n";


    }

};
int main(){
    Department A("Thapar" , "CS");
    A.display();
}