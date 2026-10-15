/*
. Write a C++ program that will ask for a temperature in Celsius and display it in degree Fahrenheit.[F=9C/5+32] 
*/
#include<iostream>
using namespace std;
int main(){
    int tempincelsius;
    cout<<"Enter the temprature: ";
    cin>>tempincelsius;

    cout<<"So you entred the temprature is "<<tempincelsius<<" celsius"<<"\n";

    int farnehiet = tempincelsius * 9/5 + 32;

    cout<<"The converted temprature in farnehiet: "<<farnehiet<<" farnehiet";
 
 
}