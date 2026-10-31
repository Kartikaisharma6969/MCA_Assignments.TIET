/*6. Create a base class Person with a virtual destructor and a derived class
Student with its own destructor. Create a dynamically allocated Student
object using a base-class pointer and delete it. Observe and explain the
order in which the destructors execute.*/
#include<iostream>
using namespace std;
class Person{
    public:



    virtual ~Person(){
        std::cout<<"Dtor of Person class is called..\n";
    }

};
class Student: public Person{

    public:

     ~Student()override{
        std::cout<<"Dtor of Student class is caledd//\n";

    }

};
int main(){
    Person *ptr = new Person();
    delete ptr;


    Person *ptr2 = new Student();
    delete ptr2;

 
 
 
}