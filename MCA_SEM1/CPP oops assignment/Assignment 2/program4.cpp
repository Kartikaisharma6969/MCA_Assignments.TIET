/*
4. Create a class Box with data members length, width, and height. Implement:
 a default constructor,

*/
#include<iostream>
using namespace std;
class Box{
    //data//
    public:
    int length;
    int width;
    int height;

    public:
    Box(){
        cout<<"constructor 1 is called " <<endl;

        cout<<"Enter the length of the box: ";
        int c_length;
        cin>>c_length;
        this->length = c_length;
        cout<<"Enter the Breadth of the Box: ";
        int c_Width;
        cin>>c_Width;
        this->width = c_Width;

        cout<<"Enter the Height of the box" ;
        int c_height;
        cin>>c_height;
        this->height = c_height;

    }
    Box(int c_length , int c_height, int c_width){
        cout<<"constructor 2 callled"<<endl;

                this->length = c_length;
                        this->width = c_width;
                                this->height = c_height;



    }

    //member functions//

    void Displaydetails(){
        cout<<"Lenfht of box is: "<<length<<endl;
        cout<<"The breadth of the box: "<<width<<endl;
        cout<<"The height of the box: "<<height<<endl;
        cout<<"Area of the Cuboid: "<<length * width *height<<endl;
    }

};
int main(){
    Box A(2,4,5);
    A.Displaydetails();
    Box B;
    B.Displaydetails();
    
    
    
 
 
 
}