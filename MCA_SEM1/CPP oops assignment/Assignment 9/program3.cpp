/*3. Implement a class template Calculator that stores two values and provides
functions to perform addition, subtraction, multiplication, and division.*/
#include<iostream>
template<typename T>
class Calculator{
    public: 
    T a;
    T b;


    //ctor//

    Calculator (T A , T B){
        this->a = A;
        this->b = B;

    }

    T Addition (){
        return  a + b;
    }
    T Multiplication(){
        return a * b;

    }

    T Subtraction(){
        return a- b ;

    }

    T Division(){
        if(b==0){
            std::cout<<"The denominator cannot be 0..\n";
            return 0;
        }
        return a/b;
    }

    
};
int main(){
 Calculator <int> A(2,3);
 std::cout<<"The additiOn of number gives: "<<A.Subtraction()<<"\n";
 std::cout<<"The Subtraction of number gives: "<<A.Addition()<<"\n";
 std::cout<<"The Multiplication of number gives: "<<A.Multiplication()<<"\n";
 std::cout<<"The Divison of number gives: "<<A.Division()<<"\n";

Calculator<float> B(3.9,4.8);
 std::cout<<"The additiOn of number gives: "<<B.Subtraction()<<"\n";
 std::cout<<"The Subtraction of number gives: "<<B.Addition()<<"\n";
 std::cout<<"The Multiplication of number gives: "<<B.Multiplication()<<"\n";
 std::cout<<"The Divison of number gives: "<<B.Division()<<"\n";





 
 
}