/*reversing the ls*/

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr) {
        Node* forward = curr->next;

        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    return prev;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }

    std::cout << "NULL\n";
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original list: ";
    display(head);

    head = reverseList(head);

    std::cout << "Reversed list: ";
    display(head);

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
