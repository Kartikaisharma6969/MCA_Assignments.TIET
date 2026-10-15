/*
Q1. Create a class Print with overloaded display() functions to display an 
integer, a double value, and a string. 
*/
#include<iostream>
using namespace std;
class Print{
    public:

    
    //member functions//
    void display(int a){
        std::cout<<"Entered number is a integer: "<<a<<"\n"; 

    }
    void display(double a){

        std::cout<<"Entred number is a double: "<<a<<"\n";
        }
    void display(string a){
        cout<<"Entred elment is a string: "<<a<<"\n";

    }


};
int main(){
    Print A;
    A.display(4);
    A.display(8.9);
    A.display("Kartikai");
 
 
 
}