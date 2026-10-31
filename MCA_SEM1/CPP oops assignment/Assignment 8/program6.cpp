
#include <iostream>
#include <stdexcept>
using namespace std;

class Student {
public:
    int marks[5];
    void acceptMarks() {
        for (int i = 0; i<5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100) {
                throw out_of_range("Marks must be between 0 and 100!");
            }
        }
    }

    void calculateAverage() {
        int sum = 0;

        for (int i=0; i<5; i++) {
            sum += marks[i];
        }

        cout <<"Average marks: "<< sum / 5.0 << endl;
    }
};

int main() {
    Student s;

    try {
        s.acceptMarks();
        s.calculateAverage();
    }
    catch (const out_of_range& e) {
        cout << "Invalid Input: " << e.what() << endl;
    }

    return 0;
}
