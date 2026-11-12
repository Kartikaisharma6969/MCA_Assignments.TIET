
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

void Heapify(vector<int>& arr, int n, int i, bool increasing) {
    int largestOrSmallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (increasing) {
        if (left < n && arr[left] > arr[largestOrSmallest])
            largestOrSmallest = left;

        if (right < n && arr[right] > arr[largestOrSmallest])
            largestOrSmallest = right;
    }
    else {
        if (left < n && arr[left] < arr[largestOrSmallest])
            largestOrSmallest = left;

        if (right < n && arr[right] < arr[largestOrSmallest])
            largestOrSmallest = right;
    }

    if (largestOrSmallest != i) {
        std::swap(arr[i], arr[largestOrSmallest]);
        Heapify(arr, n, largestOrSmallest, increasing);
    }
}

void HeapSort(vector<int>& arr, bool increasing) {
    int n = arr.size();

    // Build heap
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n, i, increasing);

    // Extract elements
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        Heapify(arr, i, 0, increasing);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> increasing = arr;
    vector<int> decreasing = arr;

    HeapSort(increasing, true);
    HeapSort(decreasing, false);

    cout << "\nIncreasing Order: ";
    for (int x : increasing)
        cout << x << " ";

    cout << "\nDecreasing Order: ";
    for (int x : decreasing)
        cout << x << " ";

    return 0;
}
