/*
4. Create a C++ program to demonstrate Hierarchical Inheritance.
Create a base class Vehicle containing:
Brand
Model
Create two derived classes:
Car → Number of Doors
Bike → Engine Capacity
Create separate objects of Car and Bike and display their respective details.
*/
#include<iostream>
class Vehicle{
    public:

    std::string Brand;
    std::string Model;
    Vehicle(std::string br, std::string mod){
        this->Brand = br;
        this->Model = mod;
    }
};
class Car: public Vehicle{
    public:
    int no_of_doors;

    Car(std::string br ,std:: string mod,  int no):Vehicle(br,mod){
        this->no_of_doors = no;

    }
    void Details(){
        std::cout<<"Brand of Car: "<<Brand<<"\n";
        std::cout<<"Model of Car: "<<Model<<"\n";
        std::cout<<"No of Doors: "<<no_of_doors<<"\n";
    }

};
class Bike: public Vehicle{
    public:
    int EngineCapacity;
    Bike(std::string br, std::string mod , int eng_cap): Vehicle(br,mod){
        this->EngineCapacity = eng_cap;
    }

    void Details(){
        std::cout<<"Brand of the Bike: "<<Brand<<"\n";
        std::cout<<"Model of the Bike: "<<Model<<"\n";
        std::cout<<"Engine Capacity of bike: "<<EngineCapacity<<"cc"<<"\n";
    }


};
int main(){
    Car A("Maruti", "Sedan", 4);
    Bike B("Royal Enfiled", "Meteor", 350);

    A.Details();
    std::cout<<"\n";
    B.Details();

 
 
 
}