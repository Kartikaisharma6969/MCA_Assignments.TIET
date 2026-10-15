/*
4. Create a class Number containing an integer data member. Create two objects
and overload the following operators:
 + to add the values.
 - to subtract the values.
Display the results of both operations.
*/
#include<iostream>
using namespace std;
class Number{
    public:
    int integer;

    Number(int val){
        this->integer = val;
    }


    //member functions//
    Number operator+(Number C){
        Number temp(0);
        temp.integer = this->integer + C.integer;
        return temp;
    }

    Number operator-(Number C){
        Number temp(0);
        temp.integer = this->integer - C.integer;
        return temp;
    }



};
int main(){
    Number A(4);
    Number B(5);
    std::cout<<"Value of number A: "<<A.integer<<"\n";
    std::cout<<"Value of number B: "<<B.integer<<"\n";

    Number C = B - A;
    std::cout<<"Value of number C (B - A): "<<C.integer<<"\n";

    Number D = B + A;
    std::cout<<"Value of number D (B + A ): "<<D.integer<<"\n";




 
 
 
}