
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

// (a) Insertion at beginning
void insertBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

// (b) Insertion at end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// (c) Insertion before or after a specific value
void insertBeforeAfter(Node*& head, int key, int value, char choice) {
    if (choice == 'B' || choice == 'b') {
        if (head == nullptr) {
            std::cout << "List is empty.\n";
            return;
        }

        if (head->data == key) {
            insertBeginning(head, value);
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr &&
               temp->next->data != key) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            std::cout << "Target node not found.\n";
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else if (choice == 'A' || choice == 'a') {
        Node* temp = head;

        while (temp != nullptr && temp->data != key) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            std::cout << "Target node not found.\n";
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else {
        std::cout << "Invalid choice.\n";
    }
}

// (d) Deletion from beginning
void deleteBeginning(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// (e) Deletion from end
void deleteEnd(Node*& head) {
    if (head == nullptr) {
        std::cout << "List is empty.\n";
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// (f) Deletion of a specific node (first matching value)
void deleteSpecific(Node*& head, int key) {
    if (head == nullptr) {
        std::cout << "List is empty.\n";
        return;
    }

    if (head->data == key) {
        deleteBeginning(head);
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        std::cout << "Node not found.\n";
        return;
    }

    Node* target = temp->next;
    temp->next = target->next;
    delete target;
}

// (g) Search and display position (1-based)
void searchNode(Node* head, int key) {
    int position = 1;
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == key) {
            std::cout << "Node found at position "
                      << position << ".\n";
            return;
        }

        temp = temp->next;
        position++;
    }

    std::cout << "Node not found.\n";
}

// (h) Display all node values
void display(Node* head) {
    if (head == nullptr) {
        std::cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }

    std::cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int choice, value, key;
    char positionChoice;

    do {
        std::cout << "\n--- SINGLY LINKED LIST MENU ---\n";
        std::cout << "1. Insert at beginning\n";
        std::cout << "2. Insert at end\n";
        std::cout << "3. Insert before/after a value\n";
        std::cout << "4. Delete from beginning\n";
        std::cout << "5. Delete from end\n";
        std::cout << "6. Delete a specific value\n";
        std::cout << "7. Search for a value\n";
        std::cout << "8. Display list\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value: ";
                std::cin >> value;
                insertBeginning(head, value);
                break;

            case 2:
                std::cout << "Enter value: ";
                std::cin >> value;
                insertEnd(head, value);
                break;

            case 3:
                std::cout << "Enter target value: ";
                std::cin >> key;
                std::cout << "Enter new value: ";
                std::cin >> value;
                std::cout << "Insert Before (B) or After (A): ";
                std::cin >> positionChoice;
                insertBeforeAfter(
                    head, key, value, positionChoice
                );
                break;

            case 4:
                deleteBeginning(head);
                break;

            case 5:
                deleteEnd(head);
                break;

            case 6:
                std::cout << "Enter value to delete: ";
                std::cin >> key;
                deleteSpecific(head, key);
                break;

            case 7:
                std::cout << "Enter value to search: ";
                std::cin >> key;
                searchNode(head, key);
                break;

            case 8:
                display(head);
                break;

            case 0:
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 0);




    return 0;
}
