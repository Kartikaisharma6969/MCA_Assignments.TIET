#include <iostream>

class Number {
private:
    int a;
    int b;

public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void calculateSum(Number n);
};

void calculateSum(Number n) {
    std::cout << "Sum = " << n.a + n.b << std::endl;
}

int main() {
    Number num(10, 20);

    calculateSum(num);

    return 0;
}