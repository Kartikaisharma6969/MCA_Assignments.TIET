/*
2. Create a class Rectangle having data members length and breadth. Use a
parameterized constructor to initialize the values and display the area of the
rectangle.
*/
#include<iostream>
using namespace std;
class Rectangle{
    //data//
    public:

    int len;
    int brt;
    
    public:

    Rectangle(int c_len,int c_brt){
        

   
        this-> len = c_len;

        this->brt = c_brt;
    }

    //public:

    void Area(){
        cout<<"The Area of rectangle: ";
        cout<<len * brt;
    }




};
int main(){

    Rectangle A(4,3);
    A.Area();
 
 
 
}