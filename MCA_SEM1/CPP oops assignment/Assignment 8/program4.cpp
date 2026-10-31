/*4. Write a program to access an element of an array. Throw and handle an
exception if the entered index is outside the valid range.*/

#include<iostream>

using namespace std;
int main(){
    int arr[5] = {0};


    std::cout<<"Enter the values for array: \n";
    for(int i = 0 ; i <5 ; i++){
        std::cout<<"Enter the element no "<<i+1<<" :";
        int val;
        std::cin>>val;
        arr[i] = val;
    }


    std::cout<<"printing the array-->\n";
    for(int i = 0 ; i <5 ; i++){

        std::cout<<arr[i]<<" ";
    }

    cout<<"\n";
    try{

    std::cout<<"Enter the index of array whose element to access: ";
    int ind;
    std::cin>>ind;

    if(ind>=5){
        throw "Cannot access out of bonds size of the array..";
    }

    std::cout<<"The element at the index "<<ind<<" is: "<<arr[ind]<<"\n";
    }catch(const char *e){
      std::cout<<"Exception occured: "<<e<<"\n";
    }
 
 
}