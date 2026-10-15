/*
3. Create a class Number containing an integer data member value. Create two
objects and overload the binary + operator to add the values stored in the two
objects. Display the result.
*/
#include<iostream>
using namespace std;
class Number{
    public:
    int value;

    //Constrcutor//

    Number(int v){
        this->value = v;
    }

    Number operator+(Number &C){
        Number temp(0);

        temp.value = this->value + C.value;
        return temp;
    }


    


};
int main(){
    Number A(3);
    Number B(2);

    Number C =  A + B;
    std::cout<<"On the addition of number "<<A.value<<" and the number "<<B.value<<": "<<C.value<<"\n";
 
 
 
}