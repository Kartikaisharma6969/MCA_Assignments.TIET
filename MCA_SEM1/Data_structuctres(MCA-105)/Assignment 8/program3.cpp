
#include <iostream>
#include <algorithm>

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

Node* Insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = Insert(root->left, value);
    else if (value > root->data)
        root->right = Insert(root->right, value);

    return root;
}

Node* FindMin(Node* root) {
    while (root != nullptr && root->left != nullptr)
        root = root->left;

    return root;
}

Node* Delete(Node* root, int key) {
    if (root == nullptr) return nullptr;

    if (key < root->data) {
        root->left = Delete(root->left, key);
    }
    else if (key > root->data) {
        root->right = Delete(root->right, key);
    }
    else {
        // Case 1: No child
        if (root->left == nullptr &&
            root->right == nullptr) {
            delete root;
            return nullptr;
        }

        // Case 2: One child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* temp = FindMin(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }

    return root;
}

// Maximum Depth
int MaxDepth(Node* root) {
    if (root == nullptr) return 0;

    return 1 + std::max(MaxDepth(root->left),
                   MaxDepth(root->right));
}

// Minimum Depth
int MinDepth(Node* root) {
    if (root == nullptr) return 0;

    if (root->left == nullptr)
        return 1 + MinDepth(root->right);

    if (root->right == nullptr)
        return 1 + MinDepth(root->left);

    return 1 + std::min(MinDepth(root->left),
                   MinDepth(root->right));
}

void Inorder(Node* root) {
    if (root == nullptr) return;

    Inorder(root->left);
    std::cout << root->data << " ";
    Inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 70);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 60);
    root = Insert(root, 80);

    std::cout << "BST: ";
    Inorder(root);

    root = Delete(root, 30);

    std::cout << "\nAfter Deletion: ";
    Inorder(root);

    std::cout << "\nMaximum Depth: " << MaxDepth(root);
    std::cout << "\nMinimum Depth: " << MinDepth(root);

    return 0;
}
