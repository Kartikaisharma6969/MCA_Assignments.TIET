/*5. Create a class template Pair that stores two values, which may have different
data types. Implement functions to display both values. Test it with an
integer and a string.*/
#include<iostream>
template <typename T1, typename T2>
class Pair{
    public:
    T1 A;
    T2 B;
    //ctor//

    Pair(T1 a, T2 b){
        this->A = a;
        this->B = b;
    }

    T1 first(){
        return A;

    }
    T2 second(){
        return B;
    }
};
int main(){
    Pair<int,int> pairi(3,4);
    std::cout<<"The first number of the pair: "<<pairi.first()<<"\n";
    std::cout<<"The second number of the pair is : "<<pairi.second()<<"\n";


    
 
 
 
}