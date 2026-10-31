/*
3. Write a program that checks if an expression has balanced parentheses. 
*/
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

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {

    std::string expression;

    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    Stack s(expression.length());

    for (int i = 0; i < expression.length(); i++) {

        if (expression[i] == '(') {
            s.push(expression[i]);
        }

        else if (expression[i] == ')') {

            if (s.isEmpty()) {
                std::cout << "Parentheses are not balanced.\n";
                return 0;
            }

            s.pop();
        }
    }

    if (s.isEmpty()) {
        std::cout << "Parentheses are balanced.\n";
    }
    else {
        std::cout << "Parentheses are not balanced.\n";
    }

    return 0;
}

