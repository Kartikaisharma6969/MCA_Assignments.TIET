/*
4. Create a class Student with a static data member to keep track of the number of
objects created. Create three objects and display the total number of objects.
*/
#include <iostream>

class Student {
private:
    static int count;

public:
    Student() {
        count++;
    }

    static void displayCount() {
        std::cout << "Total number of objects = " << count << std::endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}