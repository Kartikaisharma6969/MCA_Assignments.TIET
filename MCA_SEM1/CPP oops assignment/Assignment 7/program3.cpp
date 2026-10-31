/*3. Create a base class Shape with a virtual function area(). Derive classes
Rectangle and Circle that override area() to calculate and display their
respective areas. Demonstrate runtime polymorphism using a base-class
pointer.*/
#include<iostream>
using namespace std;
class shape{
    public:


   virtual  double Area(){
    std::cout<<"Calculate the area of shapes..\n";
    return 0;
    }

   virtual  ~shape(){

    }

};
class Rectangle: public shape{
    public:
    int length;
    int breadth;


    Rectangle(){
        int len ;
         int bread;
        std::cout<<"Enter the length of rectangle: ";
        std::cin>>len;
        std::cout<<"Enter the Breadth of Rectangle: ";
        std::cin>>bread;
        this->length = len;
        this->breadth = bread;

    }

    double Area (){
        return length * breadth;

    }


};

class Circle: public shape{
    public:
    int radius;
    const int pi = 3.14;

    Circle(){
        int radi;
        std::cout<<"Enter the radius: ";
        std::cin>>radi;
        this->radius = radi;

    }

    double Area(){
        return pi* (radius * radius);
    }

};
int main(){
    shape *ptr = new shape();
    ptr->Area();
    delete ptr;

    std::cout<<"Area of the Rectangle: \n";
    shape *ptr2 = new Rectangle();
    std::cout<<"Area of rectangle is: "<<ptr2->Area()<<"\n";
    delete ptr2;

    std::cout<<"Area of the circle: \n";
    shape*ptr3 = new Circle();
    std::cout<<"\n";
    std::cout<<"The area of the circle is calculated: "<<ptr3->Area();
    delete ptr3;


 
 
 
}