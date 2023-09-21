#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    };
};

void Inorder(Node *root){
    if(!root) // (root == NULL)
        return;

    Inorder(root->left);
    cout<<root->data<<" ";    
    Inorder(root->right);   
}
void Preorder(Node *root){
    if(!root) 
        return;

    cout<<root->data<<" ";
    Preorder(root->left);    
    Preorder(root->right);   
}
void Postorder(Node *root){
    if(!root) 
        return;

    Postorder(root->left);    
    Postorder(root->right);
    cout<<root->data<<" ";   
}

Node *binaryTree()
    {
        int x;
        cout<<"Enter the value: ";
        cin>>x;

        if(x == -1)
            return NULL;

        Node *root = new Node(x);
        cout<<"Enter the Left child of "<<x<<"\n";
        root->left = binaryTree();
        cout<<"Enter the Right child of "<<x<<"\n";
        root->right = binaryTree();
        
        return root;
    }


int main()
{
    Node *root = binaryTree();

    cout<<"InOrder: ";
    Inorder(root);
    cout<<"\nPreOrder: ";
    Preorder(root);
    cout<<"\nPostOrder: ";
    Postorder(root);

    return 0;
}