/*2. Implement following functions for Binary Search Trees  

(a) Search a given item (Recursive & Non-Recursive) 

(b) Maximum element of the BST  

(c) Minimum element of the BST  

(d) In-order successor of a given node the BST  

(e) In-order predecessor of a given node the BST */

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
int SearchUsingTraversal(Node *Root,int target,int &count){
    if(Root == NULL){
        return -1;
    }
    count++;

    if(Root->data == target){
        return count;

    }


    int left = SearchUsingTraversal(Root->left,target, count);
    if(left!=-1){
        return left;
    }

    

    return SearchUsingTraversal(Root->right,target,count);

}

int maximuminBT(Node *Root,int &currmaxi){

    if(Root->data == -1){
        return -1;
    }
    if(Root->data > currmaxi){
        currmaxi = Root->data;
    }

    maximuminBT(Root->left,currmaxi);
    maximuminBT(Root->right,currmaxi);


    

}
int main(){
    Node* Root = NULL;
    Root = buildTree(Root);



    int elem;
    std::cout<<"Enter the element to find: ";
    std::cin>>elem;
    int count = 0;

    int ans = SearchUsingTraversal(Root,elem,count);
    if(ans!=-1){
        std::cout<<"The element "<<elem<<"  is present at node no "<<ans<<" according to preorder tarversal..\n";
    }else{
        std::cout<<"No element found//\n";

        
    }
 
 
}