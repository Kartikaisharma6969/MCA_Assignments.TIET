/*2. Create a base class Animal with a virtual function sound(). Derive classes
Dog and Cat that override sound() to display their respective sounds. Call
the functions using base-class pointers.*/
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        std::cout<<"Animal makes sound..\n";

    }

};
class Dog: public Animal{
    public:

    void sound()override{
        std::cout<<"Dog barks..\n";

    }

};

class Cat: public Animal{
    public:

    void sound() override{
        std::cout<<"Cat meowss.\n";
    }
};
int main(){

    std::cout<<"Calling the animal object: \n";
    Animal *ptr = new Animal;
    ptr->sound();

    std::cout<<"Calling dog object: \n";
    Animal *ptr2 = new Dog();

    ptr2->sound();

    std::cout<<"Calling the cat object: \n";
    Animal *ptr3 = new Cat();

    ptr3->sound();


 
 
 
}