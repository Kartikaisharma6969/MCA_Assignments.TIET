#include<iostream>
#include<list>
int main(){
    std::cout<<"Creating a list..\n";

    std::list<int> lis1;

    std::cout<<"Enter the number of elements to insert in list: ";
    int no;
    std::cin>>no;

    for(int i = 0 ; i<no ; i++){
        std::cout<<"Enter the element no "<<i+1<<" :";
        int elem;
        std::cin>>elem;
        lis1.push_back(elem);
    }

    for(auto idx: lis1){
        std::cout<<idx<<" ";
    }
 
 
}