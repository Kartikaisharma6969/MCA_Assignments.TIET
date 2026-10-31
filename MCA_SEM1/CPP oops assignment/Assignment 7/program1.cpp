/*Create a base class with a function show() that prints "Current month is
October". Create a derived class that overrides the show() function to print
"Next month will be November". Create objects of both classes and call
their functions.*/

#include<iostream>
using namespace std;
class base{
    public:


    void show(){
        std::cout<<"Current month is october..\n";

    }

};
class derived: public base{
    public:
    void show(){
        std::cout<<"Next month will be November..\n";
    }

};
int main(){

    base a;
    std::cout<<"Object of base class called: \n";
    a.show();

    std::cout<<"Object of derived class called: \n";
    derived d;
    d.show();



 
 
 
}