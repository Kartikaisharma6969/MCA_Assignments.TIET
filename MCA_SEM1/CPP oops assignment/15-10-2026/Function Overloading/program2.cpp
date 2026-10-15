/*
Q2. Create a class Area with overloaded calculate() functions to calculate the 
area of a square, rectangle, and circle. 
*/
#include<iostream>
class Area{
    public:


    //functions

    void area(int side){
        std::cout<<"Area of square: "<<side * side<<"\n";
    }

    void area(int len , int bread){
        std::cout<<"Area of Rectangle: "<<len * bread<<"\n";

    }

    void area(float radius){
        const double pi = 3.14;
        double ans = pi * (radius*radius);
        std::cout<<"Area of Circle:  "<<ans<<"\n";
    }
};
int main(){
    Area Rectangle;
    Rectangle.area(12,13);
    Area Circle;
    Circle.area(12);

    Area Square;
    Square.area(6);
 
 
}
