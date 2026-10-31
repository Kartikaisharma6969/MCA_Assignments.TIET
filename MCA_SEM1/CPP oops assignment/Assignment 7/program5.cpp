/*5. Create a base class Vehicle with a virtual function displayInfo(). Derive
classes Car, Bike, and Bus, and override the function in each class to
display the vehicle's details. Demonstrate runtime polymorphism using a
base-class pointer.*/
#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void displayinfo(){
        std::cout<<"Simple vehicle..\n";

    }

    virtual ~Vehicle(){

    }
};
class Car: public Vehicle{
    public:
    void displayinfo()override{
        std::cout<<"Car is called..\n";
    }

};

class Bike: public Vehicle{
    public:
    void displayinfo()override{
        std::cout<<"Bike is called..\n";
    }

};
class Bus: public Vehicle{
    public:
    void displayinfo()override{
        std::cout<<"Bus is called..\n";
    }

};
int main(){
    Vehicle v;
    Car c;
    Bike b;
    Bus bu;

    Vehicle *ptr;
    ptr = &v;

    ptr->displayinfo();
    ptr = &c;
    ptr->displayinfo();
    ptr =  &b;

    ptr->displayinfo();

    ptr = &bu;
    ptr->displayinfo();


 
 
 
}