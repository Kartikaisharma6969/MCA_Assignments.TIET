/*3. Sorting and searching- Store integers in a vector. Use the STL sort()
algorithm to sort them and binary_search() to search for a given value.*/

#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::cout<<"Enter the vector elements below: \n";

    std::vector<int> s;
    std::cout<<"ENter the size of the vector:";
    int num;
    std::cin>> num;

    for(int i = 0 ; i<num; i++){
        std::cout<<"Enter the element no "<<i<<":";
        int elem;
        std::cin>>elem;
        s.push_back(elem);
    }

        std::cout<<"The vector have elmeents :\n";

    for(int i = 0 ; i<num ; i++){
        std::cout<<"Index "<<i<<" :"<<s[i]<<"\n";
    }

    std::cout<<"Sorting -->\n";
    std::sort(s.begin(), s.end());

    std::cout<<"Printitn after sorting changes: \n";
    
    for(int i = 0 ; i<num ; i++){
        std::cout<<"Index "<<i<<" :"<<s[i]<<"\n";
    }


 
 
 
}