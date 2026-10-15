/*
Create a class Number with an integer data member value. Overload the
unary -- operator to decrease the value of the object by 1. Display the value
before and after applying the operator.
*/
#include<iostream>
using namespace std;
class Number{
    public:
    int integer;


    //Constructor//
    Number(int n){
        this->integer = n;

    }

    Number operator--(){
        return integer--;

    }



};
int main(){

    Number A(5);
    A.integer--;
    std::cout<<A.integer;
 
 
 
}