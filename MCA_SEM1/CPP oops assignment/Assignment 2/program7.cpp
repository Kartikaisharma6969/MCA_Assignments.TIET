/*
7. Create a class Demo that displays a message when its constructor is called and another
message when its destructor is called. Create multiple objects of the class and observe
the order in which constructors and destructors execute.
*/
#include<iostream>
using namespace std;
class Demo{
    //data//
    public:
    int i;


    Demo(int c_i){
        this-> i = c_i;
        cout<<"Constructor of object "<<i<<" is called..."<<endl;


    }
    
    ~Demo(){
        cout<<"Destrcutor of object "<<i<<" is called..."<<endl;
    }
    


};
int main(){
    Demo A(1);
        Demo B(2);
            Demo C(3);
                Demo D(4);
                    Demo E(5);
                        Demo F(6);
                            Demo G(7);
    





 
 
 
}

