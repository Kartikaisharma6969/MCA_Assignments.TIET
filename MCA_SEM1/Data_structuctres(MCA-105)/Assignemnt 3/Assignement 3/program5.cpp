/*5. Write a program for the evaluation of a Postfix expression. */
#include <iostream>
#include <string>
class Stack {
public:
    int top;
      int size;
     int* arr;

    Stack(int size) {
          this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int value) {
        if (top < size - 1) {
            top++;
            arr[top] = value;
        }
    }

    int pop() {
        if (top != -1) {
            return arr[top--];
           }

        return -1;
    }

     bool isEmpty() {
         return top == -1;
     }
 
    ~Stack() {
         delete[] arr;
     }
};
 
int main() {

    std::string postfix;

    std::cout << "Enter postfix expression: ";
    std::cin >> postfix;

           Stack s(postfix.length());

    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // If operand
        if (std::isdigit(ch)) {

            int value = ch - '0';
            s.push(value);
            }

        // If operator
        else {

            int operand2 = s.pop();
            int operand1 = s.pop();

                  int result;

            switch (ch) {

             case '+':
                result = operand1 + operand2;
                   break;

             case '-':
                  result = operand1 - operand2;
                  break;

            case '*':
                  result = operand1 * operand2;
                             break;
 
            case '/':
                 result = operand1 / operand2;
                  break;

             default:
                 std::cout << "Invalid operator.\n";
                 return 0;
             }

             s.push(result);
         }
     }
 
    std::cout << "Result: " << s.pop() << "\n";

     return 0;
}
       