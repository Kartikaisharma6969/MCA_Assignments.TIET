/*4) Write a program to find first non-repeating character in a string using Queue.
Sample I/P: a a b c Sample O/P: a -1 b b*/



#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    queue<char> q;
    int freq[256] = {0};

    for (char ch : s) {
        freq[(char)ch]++;
        q.push(ch);

        while (!q.empty() &&
               freq[(char)q.front()] > 1) {
            q.pop();
        }

        if (q.empty())
            cout << -1 << " ";
        else
            cout << q.front() << " ";
    }

    return 0;
}
