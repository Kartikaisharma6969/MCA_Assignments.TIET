/*. Given a string, reverse it using STACK. For example “DataStructure” should be output as “erutcurtSataD*/

#include <iostream>
#include <string>

class Stack {
public:
    int top;
    int size;
    char* arr;

    Stack(int size) {
        this->size = size;
        top = -1;
        arr = new char[size];
    }

    void push(char ch) {
        if (top < size - 1) {
            top++;
            arr[top] = ch;
        }
    }

    char pop() {
        if (top != -1) {
            return arr[top--];
        }

        return '\0';
    }

    ~Stack() { //delteing ghte object created of stack
        delete[] arr;
    }
};

int main() {

    std::string str;

    std::cout << "Enter a string: ";
    std::cin >> str;

    Stack s(str.length());
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
        std::cout<<"Reversed string: ";

    while(s.top != -1){
        std::cout << s.pop();
    }

    std::cout << "\n";

    return 0;
}
