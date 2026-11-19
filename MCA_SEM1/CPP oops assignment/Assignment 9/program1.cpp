/*1. Write a function template maximum() that accepts two values and returns the
greater value. Test it with integers and floating-point numbers.*/

#include<iostream>
template<typename  T>
T maximum(T a , T b){
    return(a>b)? a: b;
}

int main(){
 
  std::cout<<"Maximum number in "<<maximum(13,19);
  std::cout<<"\n";
  std::cout<<"Maximum number in "<<maximum(1.45 , 89.90);
 
}