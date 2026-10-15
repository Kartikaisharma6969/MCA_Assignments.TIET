/*
Q5. Find the Maximum (Moderate)
Create a class Maximum with overloaded functions named findMax():
 findMax(int a, int b) — find the greater of two integers.
 findMax(int a, int b, int c) — find the greatest of three integers.
 findMax(double a, double b) — find the greater of two decimal numbers.
*/
#include<iostream>
using namespace std;
class Maximum{

    public:


    //member functions//

    int findMax(int a  , int b){
        return (a>b)?a:b;

    }
    int findMax(int a  ,int b , int c){
        if(a>b){
            if(b>c){
                return b;
            }
        }
        else if(b>a){
            if(b>c){
                return b;
            }
        

        }
        return c;
    }

    double findMax(double a, double b){
        return (a>b)? a:b;

    }


};
int main(){
    Maximum A;

    std::cout<<"MaXIMUM: "<<A.findMax(2,4,5)<<"\n";
    std::cout<<"MaXIMUM: "<<A.findMax(1,3)<<"\n";
    std::cout<<"MaXIMUM: "<<A.findMax(2.3, -1.2)<<"\n";

 
 
 
}