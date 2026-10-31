/*Write a program to count the number of occurrences of a given key in a singly linked
list and then delete all the occurrences.*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;

    Node *next;


    //ctor//

    Node(int d){
        this->data = d;
        this->next = nullptr;
    }
};
void Nodeinstertions(Node *&Head){
    std::cout<<"Enter the number of nodes you want to enter: ";
    int no;
    std::cin>> no;

    Node *temp = Head;

    for(int i = 1 ; i<=no ; i++){
        std::cout<<"Enter the node no "<<i+1<<" value: ";
        int d;
        std::cin>>d;
        Node *newnode = new Node(d);
        temp->next = newnode;
        temp = newnode;

        if(i==no-1){
           newnode->next = nullptr;
        }
        
    }


    std::cout<<"The node creation is done..\n";

}

void Printing(Node *Head){
     if(Head == nullptr){
        return;
     }

     std::cout<<Head->data<<"->";
     Printing(Head->next);

}
int Countoccurences(Node *temp,int target,int count = 0){
    if(temp == nullptr){
        return count;
    }
    if(temp->data == target){
        count++;

    }

    return Countoccurences(temp->next , target , count);


}
int main(){
    Node *Head = new Node(1);

    Nodeinstertions(Head);

    std::cout<<"Printing entred nodes: ";
    Printing(Head);
    

    std::cout<<"Enter the number whose occurence you want to find out in linked list: ";
    int num;
    std::cin>>num;

    std::cout<<"\nThe count of number "<<num<<" is: "<<Countoccurences(Head, num);


 
 
 
}