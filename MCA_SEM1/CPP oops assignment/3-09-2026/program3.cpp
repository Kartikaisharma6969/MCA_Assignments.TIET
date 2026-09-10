/*
3. Create a class Employee with a private data member salary. Create two objects
and use a friend function to compare their salaries and display the higher
salary.
*/
#include <iostream>

class Employee {
private:
    int salary;

public:
    Employee(int s) {
        salary = s;
    }

    friend void compareSalary(Employee e1, Employee e2);
};

void compareSalary(Employee e1, Employee e2) {
    if (e1.salary > e2.salary) {
        std::cout << "Higher salary = " << e1.salary << std::endl;
    }
    else if (e2.salary > e1.salary) {
        std::cout << "Higher salary = " << e2.salary << std::endl;
    }
    else {
        std::cout << "Both salaries are equal." << std::endl;
    }
}

int main() {
    Employee emp1(50000);
    Employee emp2(65000);

    compareSalary(emp1, emp2);

    return 0;
}