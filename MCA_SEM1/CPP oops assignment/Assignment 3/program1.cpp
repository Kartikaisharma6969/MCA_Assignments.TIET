//1. Student — Friend Function
#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int marks;

public:
    Student(std::string n, int m) {
        name = n;
        marks = m;
    }

    friend void display(Student s);
};

void display(Student s) {
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Marks: " << s.marks << std::endl;
}

int main() {
    Student s1("Kartikai", 85);

    display(s1);

    return 0;
}