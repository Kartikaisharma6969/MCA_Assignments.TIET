/*4. Using stack and Queue- Write a program to demonstrate the operations
push(), pop(), and top() using stack, and push(), pop(), and front() using
queue.*/
#include<iostream>
#include<stack>
#include<queue>
void sdisplay(std::stack<int> s){
    if(s.empty()){
        return;
    }
    std::cout<<s.top()<<" ";
    s.pop();
    sdisplay(s);
}
void qdisplay(std::queue<int> q){
    if(q.empty()){
        return;
    }
    std::cout<<q.front()<<" ";
    q.pop();
    qdisplay(q);
}
int main(){

    std::stack<int> s;
    std::queue<int> q;
    int n;
    std::cin>>n;
    
    for(int i = 0 ; i <n; i++){
        std::cout<<"Enter the value no "<<i+1<<" :";
        int val;
        std::cin>>val;
        s.push(val);
        q.push(val);
    }

    std::cout<<"The top of the stack is: "<<s.top()<<"\n";
    

    sdisplay(s);
    std::cout<<"\n";
    std::cout<<"The front of the queue is: "<<q.front()<<"\n";
    std::cout<<"The back of the queue is : "<<q.back()<<"\n";

    std::cout<<"The queue looks like: \n";
    qdisplay(q);


 
}