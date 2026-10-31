/*3. Write a program that accepts an integer and throws different exceptions if
the number is negative or greater than 100. Handle both exceptions
separately.*/
#include<iostream>
using namespace std;
int main(){

    try{
    std::cout<<"Enter the number: ";
    int num;
    std::cin>> num;

    if(num>100){
        throw "The number cannot be greater..";
    }

    if(num<0){
        throw "The number cannot be in negative..";
    }

    
    std::cout<<"The number is valid..\n";

    }catch(const char *e){
        std::cout<<"Exception occured: "<<e<<"\n";
    }


 
 
 
}