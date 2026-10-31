/*4. Create a base class Employee with data members name and basicSalary and
a virtual function calculateSalary(). Derive classes PermanentEmployee
and ContractEmployee that calculate salary differently. Call the overridden
functions using a base-class pointer.*/
#include<iostream>
using namespace std;
class Employee{
    public:

    string name;
    double basesalary;

    Employee(string n, double b){
        this->basesalary = b;
        this->name = n;
    }

    virtual void CalculateSalary(){
        std::cout<<"Salary of Employee: "<<basesalary * 0.20;
    }

    virtual ~Employee(){

    }

};

class PermananentEmployee: public Employee{
    public:
        PermananentEmployee(string n, double b):Employee(n,b){
        this->basesalary = b;
        this->name = n;
    }
    void CalculateSalary()override{
                std::cout<<"Salary of Permanent Employee: "<<basesalary * 0.50;


    }


};
class ContractEmployee: public Employee{
    public:
        ContractEmployee(string n, double b):Employee(n,b){
        this->basesalary = b;
        this->name = n;
    }

    void CalculateSalary()override{
                std::cout<<"Salary of Contract Employee: "<<basesalary *0.10;


    }
};
int main(){
    Employee *E = new Employee("Kartikai" , 40000);
    std::cout<<"Salary of a normal employee->\n";
    E->CalculateSalary();

    std::cout<<"Salary of a Permananet Employee:-> \n";
    Employee *PE = new PermananentEmployee("Nitish", 50000);
    PE->CalculateSalary();

    std::cout<<"Salary of a Contract Employe--> \n";
    Employee *CE = new ContractEmployee("Naman" , 10000);
    CE->CalculateSalary();
    delete E;
    delete PE;
    delete CE;

 
 
 
}