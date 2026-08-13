/*
2) Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. Code the Bubble sort with the following elements:
*/
#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){

for(int i = 0 ;i<size-1;i++){
    for(int  j = 0; j<size-1-i; j++){
        
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);

        }
    }
}

}




int main(){
 int arr[] = {64 , 34, 35,12,22,11,90};
 int size = sizeof(arr) /sizeof(int);
 

 cout<<"After the implementation of bubble sort: ";
 bubblesort(arr,size);

 for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
 }



 
 
}