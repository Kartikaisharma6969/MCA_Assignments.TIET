/*2. Write a function template swapValues() to exchange two values.
Demonstrate it using integers and characters.*/

#include<iostream>
template <typename T>

void swapvalues(T &a, T &b){
    T temp;
    temp = b;
    b = a;
    a = temp;

}
int main(){
    std::cout<<"For Integers--->>>>\n";


    std::cout<<"Enter the value for a: ";
    int a;
    std::cin>> a;
    std::cout<<"Enter the value for b: ";
    int b;
    std::cin>> b;
    
    std::cout<<"Before swap a = "<<a<<" , b = "<<b<<"\n";
    swapvalues(a,b);
    std::cout<<"After swap a = "<<a<<" , b = "<<b<<"\n";


    //lets try on the characters value;
    std::cout<<"For characters--->>>>\n";

    std::cout<<"Enter the value for char a: ";
    char a1;
    std::cin>> a1;
    std::cout<<"Enter the value for char b: ";
    char b2;
    std::cin>> b2;
    
    std::cout<<"Before swap a = "<<a1<<" , b = "<<b2<<"\n";
    swapvalues(a1,b2);
    std::cout<<"After swap a = "<<a1<<" , b = "<<b2<<"\n";


 
 
 
}