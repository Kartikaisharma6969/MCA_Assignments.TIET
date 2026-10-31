/*1. Develop a menu driven program for the following operations of on a Circular as well
as a Doubly Linked List.
(a) Insertion anywhere in the linked list (As a first node, as a last node, and
after/before a specific node).
(b) Deletion of a specific node, say 'Delete Node 60'. That mean the node to be
deleted may appear as a head node, last node or a node in between.
(c) Search for a node.*/


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

void printing(Node* Head) {
    while (Head != nullptr) {
        cout << Head->data << " -> ";
        Head = Head->next;
    }
    cout << "NULL\n";
}

int main() {

    Node* head = nullptr;
    char choice;

    do {
        cout << "\n<------ MAIN MENU ------>\n";
        cout << "(a) Insertion\n";
        cout << "(b) Deletion\n";
        cout << "(c) Searching\n";
        cout << "(d) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 'a':
        case 'A': {

            int inschoice;

            do {
                cout << "\n<------ INSERTION MENU ------>\n";
                cout << "(1) Create a head\n";
                cout << "(2) Insert at head\n";
                cout << "(3) Insert at tail\n";
                cout << "(4) Insert at any position\n";
                cout << "(5) Return to main menu\n";
                cout << "Enter your choice: ";
                cin >> inschoice;

                switch (inschoice) {

                case 1: {
                    int d;
                    cout << "Enter data for head: ";
                    cin >> d;

                    if (head != nullptr) {
                        cout << "List already exists. Create only one head.\n";
                        break;
                    }

                    head = new Node(d);
                    cout << "Head created successfully!\n";
                    printing(head);
                    break;
                }

                case 2: {
                    int dat;
                    cout << "Enter data for insertion at head: ";
                    cin >> dat;

                    Node* newnode = new Node(dat);

                    newnode->next = head;
                    head = newnode;

                    cout << "Node inserted at head!\n";
                    printing(head);
                    break;
                }

                case 3: {
                    int dat;
                    cout << "Enter data for insertion at tail: ";
                    cin >> dat;

                    Node* newnode = new Node(dat);

                    if (head == nullptr) {
                        head = newnode;
                    }
                    else {
                        Node* temp = head;

                        while (temp->next != nullptr) {
                            temp = temp->next;
                        }

                        temp->next = newnode;
                    }

                    cout << "Node inserted at tail!\n";
                    printing(head);
                    break;
                }

                case 4: {
                    int dat, pos;
                    cout << "Enter data: ";
                    cin >> dat;

                    cout << "Enter position (starting from 1): ";
                    cin >> pos;

                    if (pos < 1) {
                        cout << "Invalid position!\n";
                        break;
                    }

                    Node* newnode = new Node(dat);

                    if (pos == 1) {
                        newnode->next = head;
                        head = newnode;
                    }
                    else {
                        Node* temp = head;

                        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
                            temp = temp->next;
                        }

                        if (temp == nullptr) {
                            cout << "Invalid position!\n";
                            delete newnode;
                            break;
                        }

                        newnode->next = temp->next;
                        temp->next = newnode;
                    }

                    cout << "Node inserted successfully!\n";
                    printing(head);
                    break;
                }

                case 5:
                    cout << "Returning to main menu...\n";
                    break;

                default:
                    cout << "Invalid input!\n";
                    break;
                }

            } while (inschoice != 5);

            break;
        }

        case 'b':
        case 'B':
            int delchoice;


            do{
            cout << "<------DELETION OPERATION ------>\n";
          
            std::cout<<"1. Deletion of head "<<endl;
            std::cout<<"2. Deletion of Tail \n";
            std::cout<<"3. Deletion at given position\n";
            std::cout<<"4. Exit\n";
            std::cout<<"Enter the the choice no from above: ";
            std::cin>>delchoice;

            switch (delchoice)
            {
            case 1:{
         
                if(head == nullptr){
                    std::cout<<"Linked list is already empty.\n";
                    break;
                }

                Node*newhead = head->next;
                Node *nodetodel;

                nodetodel  = head;
                head = newhead;

                
                delete nodetodel;

                std::cout<<"Now linked list looks like: \n";
                printing(head);

                
                break;
            }
            case 2:{
              std::cout<<"Deletion of Tail is proceesing ..\n";

              Node *temp = head;

              if(head == nullptr){
                std::cout<<"Linked list is already empty..\n";
                break;
              }
              else if(head->next == nullptr){
                delete head;
                head = nullptr;
              }
              else{

              

              while (temp->next->next!=nullptr)
              {
                temp = temp->next;
              }
              Node* todel = temp->next;
              temp->next = nullptr;
              delete todel;


              std::cout<<"Linked looks like: \n";
              


            }
            printing(head);
            break;
            }
            case 3:{
                std::cout<<"Deletion at given position: \n";
                std::cout<<"Enter which number of node you want to delete: ";
                int reqnode;

                int count = 1;
                Node *temp = head;
                while(count < reqnode-1 &&temp!=nullptr){
                    temp = temp->next;
                    count++;

                }
                Node *todel = temp->next;
                temp->next = todel->next;

                delete todel;

            }
            break;


            
            default:
            std::cout<<"Invalid input..\n";
                break;
            }


            }while(delchoice!=4);

            break;

        case 'c':
        case 'C':
            cout << "Searching operation not implemented yet.\n";
            break;

        case 'd':
        case 'D':
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid input!\n";
            break;
        }

    } while (choice != 'd' && choice != 'D');

    // Free allocated memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
