/*
Q4. Create a class with overloaded result() functions to display marks in one 
subject, calculate the average of two subjects, and calculate the average of three 
subjects. 
*/
#include<iostream>
using namespace std;
class Result{
    public:
    //memeber functions//

    void result(int sub1){
        std::cout<<"Marks in the subject 1: "<<sub1<<"\n";

    }
    void result(int sub1 , int sub2){
        std::cout<<"Marks avergae of two subjects: "<<( sub1 + sub2 )/2<<"\n";

    }
    void result(int sub1 , int sub2 , int sub3){
        std::cout<<"Marks avaerage of the thress subjects : "<<(sub1  + sub2 + sub3)/ 3<<"\n";
    }


};
int main(){
    Result A;
    A.result(12);
    A.result(12,12,12);
    A.result(35,43,70);
 
 
 
}