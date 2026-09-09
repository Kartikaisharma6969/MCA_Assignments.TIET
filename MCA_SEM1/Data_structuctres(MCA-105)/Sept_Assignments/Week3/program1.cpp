/*
1. Develop a menu driven program demonstrating the following operations on a Stack using array: 
(i)push(),  (ii) pop(),  (iii) isEmpty(),  (iv) isFull(),  (v) display(), and  (vi) peek().
*/
#include<iostream>
class Stack{
    public:
    int top;
    int *arr;
    int size;

    //constructor call//
    Stack(int c_size){
        top = -1;
        this->size = c_size;
        arr = new int[size];
        

    }

    void push(int val){
        
        if(top<size-1){
            top++;
            arr[top] = val;
        }else{
            std::cout<<"Stack Overlflow\n";
        }
    }
    void pop(){
        if(top!=-1){
            
            top--;
        }else{
            std::cout<<"Stack Underflow..\n";
        }
    }
    int peek(){
        if(top>-1){
            return arr[top];
        }else{
            std::cout<<"No element in stack..\n";
        }
        return -1;
    }
    bool isempty(){
            if(top==-1){
                return true;
            }
            return false;
        }
    void display(){
        for(int i = top ; i>-1 ; i--){
            std::cout<<arr[i]<<" ";
            
        }
    }
        bool isFull(){
            if(top==size-1){
                return true;
            }
            return false;
        }

        void exiting(){
            exit(0);
        }


};
int main(){
     int choice;
    int size;
    std::cout<<"Enter the size of stack: ";
        std::cin>>size;
        Stack s(size);
    do{
    std::cout<<"Enter the choice fromt the following: \n";
    std::cout<<"1.Push element...\n";
        std::cout<<"2.Pop element...\n";
                std::cout<<"3.Peek element...\n";
                        std::cout<<"4.is empty()??...\n";
                                std::cout<<"5.Display...\n";
                                std::cout<<"6. isfull??..\n";
                                std::cout<<"7. Exit..\n";


        std::cout<<"Enter the choice number: ";
        std::cin>>choice;
       



        switch (choice)
        {
        case 1:
        for(int i = 0 ; i<size; i++){
        std::cout<<"Enter the element no "<<i+1<<" to push: ";
        int elem;
        std::cin>>elem;
        s.push(elem);

        }

            
            break;

        case 2:
        std::cout<<"Pop operation is done...\n";
        s.pop();
        break;;

        case 3:
        std::cout<<"The current top element is: "<<s.peek()<<"\n";
        break;

        case 4:
        std::cout<<"Chekcing for the stack is empty or not/......\n";
        if(s.isempty()){
            std::cout<<"The stack is empty...\n";
        }else{
            std::cout<<"The stack is full \n";
        }
        break;

        case 5:
        std::cout<<"Displaying the entered elements..\n";
        s.display();
        break;

        case 6:
        if(s.isFull()){
            std::cout<<"The stack is already full..\n";
            
        }else{
            std::cout<<"the stack have space..\n";
        }
        break;

        case 7:
        s.exiting();
        break;
        
        default:
            break;
        }
    }while(choice!=7);


    







 
 
 
}