/*2. Write a program to input a person's age. Throw an exception if the age is
negative and display an appropriate error message.*/
#include<iostream>
using namespace std;
int main(){

    try{
    
    
    std::cout<<"Enter the age of the person: ";
    int age;
    std::cin>> age;

    if(age<18&& age>10){
        std::cout<<"The person is teenager.\n";

    }else if(age>18 ){
        std::cout<<"The person is adult..\n";
    }

    if(age <0){
        throw "The age cannot be in negative!";
    }
    }catch(const char *e){
        std::cout<<"Exception occured: "<<e<<"\n";
    }

 
 
 
}