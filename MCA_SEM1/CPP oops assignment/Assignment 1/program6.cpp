/*
6. Create a code snippet that illustrates the following: a. Calling of private member 
functions inside public member function b. Access private member functions inside public member function 
*/
#include<iostream>
using namespace std;
class temp{
    public:
    string name;
    int age;


    //constructor//
    public:
    temp(){
        string c_name;
         int c_age;
        cout<<"cONSTRUCTOR CALLED..."<<endl;

        cout<<"Enter the name: ";
        cin>>c_name;
        this->name = c_name;
       

        cout<<"Enter the age: ";
        cin>>c_age;
        this->age = c_age;
    }

    //methods//
    private:
    void secretinfo(){
      
        cout<<"Bro i have send you the code on github repoo check asap..."<<endl;

        
    }
    public:
    void goodnight(){
        
        cout<<"Goodnight "<<name<<endl;
        secretinfo();

    }
    void greet(){
        cout<<" Hello "<<name<<endl;
        cout<<"Your age is "<<age<<" na??"<<endl;
        //called a private member function//
        secretinfo();
    }

    ~temp(){
        cout<<"Destructor called..."<<endl;
    }




};
int main(){
    temp A;

    A.greet();
    A.goodnight();

 
 
 
}