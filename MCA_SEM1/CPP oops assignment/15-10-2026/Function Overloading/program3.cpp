
/*
Q3. Calculate Sum  
Create a class Calculator with overloaded functions named sum(): 
 sum(int a, int b) — calculate the sum of two integers. 
 sum(int a, int b, int c) — calculate the sum of three integers. 
 sum(double a, double b) — calculate the sum of two decimal numbers. 
*/
#include<iostream>
using namespace std;
class Calculator{
    public:


    //Mmeber functions//

    void Sum(int a , int b){
        std::cout<<"Sum is: "<<a+b<<"\n";
    }
    void Sum(int a, int b , int c){
        std::cout<<"Sum is: "<<a+b+c<<"\n";

    }
    void sum (double a , double b){
        std::cout<<"Sum is: "<<a+b<<"\n";
    }

};
int main(){
    Calculator A;
    A.Sum(2,4);
    A.Sum(4,5,2);
    A.Sum(2.3,5.3); 
 
 
}