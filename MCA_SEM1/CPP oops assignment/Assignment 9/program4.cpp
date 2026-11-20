/*4. Create a class template ArrayOperations that stores an array of elements and
provides functions to display the elements and find the largest element.*/
#include<iostream>
#include<utility>

template <typename T>
class ArrayOperations {
public:
    T *arr;
    int size;

    // Constructor
    ArrayOperations(T* ptr, int s) {
        this->arr = ptr;
        this->size = s;
    }

    // Operations
    void insertelements() {
        for(int i = 0; i < size; i++) {
            std::cout << "Enter the element for index no " << i+1 << " : ";
            T val;
            std::cin >> val;
            arr[i] = val;
        }
    }

    void Printing(){
        for(int i = 0; i < size; i++){
            std::cout << arr[i] << "\n";
        }
    }

    std::pair<T,int> findmax(){
        T currmax = arr[0];
        int reqidx = 0;

        for(int i = 1; i < size; i++){
            if(currmax < arr[i]){
                currmax = arr[i];
                reqidx = i;
            }
        }

        return {currmax, reqidx};
    }
};

int main() {
    int arr[5] = {};
    int *ptr = arr;

    ArrayOperations<int> A(ptr, 5);

    std::cout << "Inserting the elements: \n";
    A.insertelements();

    std::cout << "\nPrinting the entered elements: \n";
    A.Printing();

    std::cout << "\nFinding the largest element: \n";

    std::pair<int,int> result = A.findmax();

    std::cout << "The maximum element in the array is: "
              << result.first
              << " at index no "
              << result.second;
}