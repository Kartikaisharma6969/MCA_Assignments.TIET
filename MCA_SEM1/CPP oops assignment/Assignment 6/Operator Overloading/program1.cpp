/*
1. Create a class Counter with an integer data member count. Overload the
unary ++ operator to increase the value of count by 1. Create an object
and display its value before and after applying ++.
*/
#include<iostream>
using namespace std;
class Counter{
    public:
    int count;


    Counter(int c){
        this->count = c;
    }

    Counter operator++(){
        Counter temp(0);
        temp.count = temp.count + 1;
        return temp.count;
    }


};
int main(){
    Counter A(3);
    A.count++;
    std::cout<<A.count<<"\n";

    Counter B(5);
    B.count++;
    std::cout<<B.count<<"\n";
 
 
 
}