/*
1. Write program using functions for binary tree traversals: Pre-order, In-order and Post

order using a recursive approach*/
#include<iostream>
class Node{
    public:
    int data;
    Node *left;
    Node *right;


    //const//
    Node(int d){
        data = d;
        this->left =NULL;
        this->right = NULL;
    }



};
Node* buildTree(Node *root){
    std::cout<<"\n";
    std::cout<<"Enter the data:";
    int data;
    std::cin>>data;
        if(data == -1){
        return NULL;

    }

    root = new Node(data);


    std::cout<<"Enter the data for inserting in left of "<<root->data<<": ";
    
    root->left = buildTree(root->left);
    std::cout<<"Enter the data for insserting right: "<<root->data<<": ";
    root->right = buildTree(root->right);
    return root;


}
void PreorderTraversal(Node *Root){
    if(Root==NULL){
        return;
    }
    std::cout<<Root->data<<" ";
    PreorderTraversal(Root->left);
    PreorderTraversal(Root->right);
}

void inorderTraversal(Node *Root){
    if(Root== NULL){
        return;
    }
    inorderTraversal(Root->left);
    std::cout<<Root->data<<" ";
    inorderTraversal(Root->right);
}

void Postordertraversal(Node *Root){
    if(Root == NULL){
        return;
    }
    Postordertraversal(Root->left);
    Postordertraversal(Root->right);
    std::cout<<Root->data<<" ";


}
int main(){
    Node *root = NULL;
    root = buildTree(root);


    std::cout<<"Traversal using the Preorder: \n";
    PreorderTraversal(root);
    std::cout<<"\n";
    std::cout<<"Traversal using the inorder: \n";
    inorderTraversal(root);
    std::cout<<"\n";
    std::cout<<"Traversal using Postorder: \n";
    Postordertraversal(root);
 
 
}


