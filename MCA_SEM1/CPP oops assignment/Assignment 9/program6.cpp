/*Implement a class template Stack using an array. Include functions push(),
pop(), and display(). Handle stack overflow and underflow conditions.*/
#include<iostream>
template <typename T>
class Stack{
    public:
    int top;
    T *arr;
    int size;


    //ctor//
    Stack(int s){
        this->size = s;
        this->top = -1;
        arr = new T [size];
    }

    //functions//

    void push(int val){
        if(top==size-1){
            std::cout<<"Stack overflow...\n";
        }
        top++;
        arr[top] = val;
        
    }

    void pop(){
        if(top==-1){
            std::cout<<"Stack underflow..\n";
            return;
            
        }
        top--;
    }

    int topitem(){
        if(top==-1){
            std::cout<<"Stack is empty..\n";
            return -1;
        }

        return arr[top];
    }



    bool empty(){
        return (top==-1)?true : false;
    }

    ~Stack(){
        delete []arr;

    }

};
    void display(Stack<int> s){
        if(s.empty()){
            return;
        }
        std::cout<<s.topitem()<<"\n";
       s.pop();
        display(s);
    }
int main(){
  Stack <int>S(5);
  S.push(3);
  S.push(4);
  S.push(6);
  S.push(10);
  S.push(11);
  S.push(18);

  display(S);




 
 
 
}