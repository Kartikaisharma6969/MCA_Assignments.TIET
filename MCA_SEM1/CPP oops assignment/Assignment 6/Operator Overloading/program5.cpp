/*
5. Create a class Complex with two data members real and imaginary. Overload
the + operator to add two complex number objects and display the resulting
complex number.
*/
#include<iostream>
using namespace std;
class Complex{
    public:

    int real;
    int imagi;

    Complex(int r , int i){
        this->real = r;
        this->imagi = i;

    }

    //member functions//

    Complex operator+(Complex &C){
        Complex temp(0,0);

        temp.real = this->real + C.real;
        temp.imagi = this->imagi + C.imagi;
        return temp;

    }

    void Print(){
        std::cout<<this->real<<" + "<<this->imagi<<"i"<<"\n";

    }


};
int main(){
    Complex A(2,3);
    Complex B(3,4);
    A.Print();
    B.Print();

    Complex C = A + B;
    std::cout<<"Sum of complex number A and B gives: ";
    C.Print();

 
 
 
}