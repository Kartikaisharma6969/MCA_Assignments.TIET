/*Using a vector- Write a C++ program using vector to store five integers,
display all elements, and calculate their sum.*/
#include<iostream>
#include<vector>
int main(){
    std::vector<int> vec;

    std::cout<<"Enter the number of elements to insert: ";
    int n;
    std::cin>>n;


    for(int i = 0; i<n ; i++){
        std::cout<<"Enter the element no "<<i+1<<" :";
        int n1;
        std::cin>>n1;
        vec.push_back(n1);
    }

    std::cout<<"Displaying all elmenets: \n";

    for(auto i: vec){ 
        std::cout<<i<<" ";
    }

 
 
 
}