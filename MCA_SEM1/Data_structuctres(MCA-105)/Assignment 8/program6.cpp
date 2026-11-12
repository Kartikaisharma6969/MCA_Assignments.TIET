
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

class PriorityQueue {
    vector<int> heap;

public:

    // Insert element
    void Insert(int value) {
        heap.push_back(value);

        int i = heap.size() - 1;

        // Heapify upwards
        while (i > 0) {
            int parent = (i - 1) / 2;

            if (heap[parent] >= heap[i])
                break;

            std::swap(heap[parent], heap[i]);
            i = parent;
        }
    }

    // Get highest priority element
    int Peek() {
        if (heap.empty()) {
            cout << "Priority Queue is Empty\n";
            return -1;
        }

        return heap[0];
    }

    // Delete highest priority element
    void Delete() {
        if (heap.empty()) {
            cout << "Priority Queue is Empty\n";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();

        int i = 0;
        int n = heap.size();

        // Heapify downwards
        while (true) {
            int largest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < n && heap[left] > heap[largest])
                largest = left;

            if (right < n && heap[right] > heap[largest])
                largest = right;

            if (largest == i)
                break;

            std::swap(heap[i], heap[largest]);
            i = largest;
        }
    }

    // Display
    void Display() {
        if (heap.empty()) {
            cout << "Priority Queue is Empty\n";
            return;
        }

        for (int x : heap)
            cout << x << " ";

        cout << "\n";
    }

    bool Empty() {
        return heap.empty();
    }
};

int main() {
    PriorityQueue pq;
    int choice, value;

    do {
        cout << "\n\n1. Insert";
        cout << "\n2. Peek";
        cout << "\n3. Delete";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                pq.Insert(value);
                break;

            case 2:
                if (!pq.Empty())
                    cout << "Highest Priority: " << pq.Peek();
                else
                    cout << "Priority Queue is Empty";
                break;

            case 3:
                pq.Delete();
                break;

            case 4:
                pq.Display();
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}
