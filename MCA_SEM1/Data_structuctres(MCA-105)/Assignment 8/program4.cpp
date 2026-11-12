
#include <iostream>
#include <climits>
using std::cout;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

bool IsBST(Node* root, long long minVal,
           long long maxVal) {

    if (root == nullptr)
        return true;

    if (root->data <= minVal ||
        root->data >= maxVal)
        return false;

    return IsBST(root->left, minVal, root->data) &&
           IsBST(root->right, root->data, maxVal);
}

int main() {
    Node* root = new Node(50);

    root->left = new Node(30);
    root->right = new Node(70);

    root->left->left = new Node(20);
    root->left->right = new Node(40);

    root->right->left = new Node(60);
    root->right->right = new Node(80);

    if (IsBST(root, LLONG_MIN, LLONG_MAX))
        cout << "Given Binary Tree is a BST";
    else
        cout << "Given Binary Tree is NOT a BST";

    return 0;
}
