/*
8) Write a program to count the total number of distinct elements in an array of length n. 
*/
#include<iostream>
using namespace std;
int main(){

    int arr[] = {2,4,2,5,6,5,1,3,4,4};

    int size = sizeof(arr)/sizeof(int);

    int frequency[10] = {};

    for(int  i = 0 ; i<size ; i++){
        frequency[arr[i]]++;
    }

    cout<<"The elements present in the array: "<<endl;
    int count = 0;
    for(int  i = 0 ; i<size; i++){
        if(frequency[i]>0){
             cout<<i<<" ";
             count++;

        }
    }
    cout<<"\n";

    cout<<"There are "<<count<<" disticnt elements: ";
    
 
 
}