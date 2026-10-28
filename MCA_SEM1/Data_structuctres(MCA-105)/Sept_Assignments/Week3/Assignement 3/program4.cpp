/*4. Write a program to convert an Infix expression into a Postfix expression. */
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

    char peek() {
        if (top != -1) {
            return arr[top];
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

int precedence(char op) {

    if (op == '^') {
        return 3;
    }

    if (op == '*' || op == '/') {
        return 2;
    }

    if (op == '+' || op == '-') {
        return 1;
    }

    return 0;
}

int main() {

    std::string infix;
    std::string postfix;

    std::cout << "Enter an infix expression: ";
    std::getline(std::cin, infix);

    Stack s(infix.length());

    for (int i = 0; i < infix.length(); i++) {

        char ch = infix[i];

        // Operand
        if (std::isalnum(ch)) {
            postfix += ch;
        }

        // Opening parenthesis
        else if (ch == '(') {
            s.push(ch);
        }

        // Closing parenthesis
        else if (ch == ')') {

            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }

            if (!s.isEmpty()) {
                s.pop();   // Remove '('
            }
        }

        // Operator
        else {
            while (!s.isEmpty() &&
                   s.peek() != '(' &&
                   precedence(s.peek()) >= precedence(ch)) {

                postfix += s.pop();
            }

            s.push(ch);
        }
    }

    while (!s.isEmpty()) {
        postfix += s.pop();
    }

    std::cout << "Postfix expression: " << postfix << "\n";

    return 0;
}

