/*1. Write a C++ program to divide two numbers. If the denominator is zero,
throw an exception and handle it using try and catch.*/
#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    std::cout<<"Enter the number 1: ";
    std::cin>>num1;
    std::cout<<"Enter the number 2: ";
    std::cin>>num2;

    try{

        if(num2==0 ){
            
            throw "Divide by 0 is undefined.";
        }
        
        std::cout<<"The divison of number "<<num1<<" and "<<num2<<" is: "<<num1/num2<<"\n";

        

    }catch(const char *e){
        std::cout<<"Exception occured: "<<e<<"\n";
    }

 
 
 
}