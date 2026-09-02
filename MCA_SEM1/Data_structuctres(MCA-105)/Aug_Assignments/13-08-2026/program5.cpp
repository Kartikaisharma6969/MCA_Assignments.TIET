/*5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. 
Assuming an array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement. 
(a) Diagonal Matrix. 
(b) Tri-diagonal Matrix. 
(c) Lower triangular Matrix.
 (d) Upper triangular Matrix. 
 (e) Symmetric Matrix*/
 #include <iostream>
using namespace std;
class DiagonalMatrix {
private:
    int n;
    int *arr;

public:
    DiagonalMatrix(int size) {
        n = size;
        arr = new int[n];
    }

    void set(int i, int j, int value) {
        if (i == j)
            arr[i] = value;
    }

    int get(int i, int j) {
        if (i == j)
            return arr[i];
        return 0;
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~DiagonalMatrix() {
        delete[] arr;
    }
};

class TriDiagonalMatrix {
private:
    int n;
    int *arr;

public:
    TriDiagonalMatrix(int size) {
        n = size;
        arr =new int[3 * n - 2];
    }

    void set(int i, int j, int value) {

        // Lower diagonal
        if (i - j == 1) {
            arr[i - 1] = value;
        }

        // Main diagonal
        else if (i == j) {
            arr[n - 1 + i] = value;
        }

        // Upper diagonal
        else if (j - i == 1) {
            arr[2 * n - 1 + i] = value;
        }
    }

    int get(int i, int j) {

        // Lower diagonal
        if (i - j == 1) {
            return arr[i - 1];
        }

        // Main diagonal
        else if (i == j) {
            return arr[n - 1 + i];
        }

        // Upper diagonal
        else if (j - i == 1) {
            return arr[2 * n - 1 + i];
        }

        return 0;
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~TriDiagonalMatrix() {
        delete[] arr;
    }
};



class LowerTriangularMatrix {
private:
    int n;
    int *arr;

public:
    LowerTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int value) {

        if (i >= j) {
            int index = i * (i + 1) / 2 + j;
            arr[index] = value;
        }
    }

    int get(int i, int j) {

        if (i >= j) {
            int index = i * (i + 1) / 2 + j;
            return arr[index];
        }

        return 0;
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~LowerTriangularMatrix() {
        delete[] arr;
    }
};




class UpperTriangularMatrix {
private:
    int n;
    int *arr;

public:
    UpperTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int value) {

        if (j >= i) {
            int index =
                i * n - (i * (i - 1)) / 2 + (j - i);

            arr[index] = value;
        }
    }

    int get(int i, int j) {

        if (j >= i) {
            int index =
                i * n - (i * (i - 1)) / 2 + (j - i);

            return arr[index];
        }

        return 0;
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~UpperTriangularMatrix() {
        delete[] arr;
    }
};



class SymmetricMatrix {
private:
    int n;
    int *arr;

public:
    SymmetricMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int value) {

        // Store only lower triangular part
        if (i >= j) {
            int index = i * (i + 1) / 2 + j;
            arr[index] = value;
        }

        // Store A[i][j] as A[j][i]
        else {
            int index = j * (j + 1) / 2 + i;
            arr[index] = value;
        }
    }

    int get(int i, int j) {

        if (i >= j) {
            int index = i * (i + 1) / 2 + j;
            return arr[index];
        }

        else {
            int index = j * (j + 1) / 2 + i;
            return arr[index];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~SymmetricMatrix() {
        delete[] arr;
    }
};
int main() {

    int n = 4;

    //diagonal//

    cout << "DIAGONAL MATRIX\n";

    DiagonalMatrix diagonal(n);

    diagonal.set(0, 0, 10);
    diagonal.set(1, 1, 20);
    diagonal.set(2, 2, 30);
    diagonal.set(3, 3, 40);

    diagonal.display();
 //Tridiagnonalii matri//

}