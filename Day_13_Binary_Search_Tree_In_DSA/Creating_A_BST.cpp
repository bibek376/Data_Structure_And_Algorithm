//Creating a Binary Search Tree
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

node *Create_Node(int data){
    node *temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

node *Insert(node *root,int data){
    if(root==NULL){
        root=Create_Node(data);
    }
    else if(data<root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

//Inorder Traversal of BST Always Gives a ascending order
void Inorder_Traversal(node *root){
    if(root!=NULL){
        Inorder_Traversal(root->left);
        cout<<root->data<<"  ";
        Inorder_Traversal(root->right);
    }
}

void Preorder_Traversal(node *root){
    if(root!=NULL){
        cout<<root->data<<"  ";
        Preorder_Traversal(root->left);
        Preorder_Traversal(root->right);
    }
}

void Postorder_Traversal(node *root){
    if(root!=NULL){
        Postorder_Traversal(root->left);
        Postorder_Traversal(root->right);
        cout<<root->data<<"  ";
    }
}

int main()
{
    node *root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,1);

    cout<<"Inorder Traversal is "<<endl;
    Inorder_Traversal(root);
    cout<<endl;

    cout<<"Preorder Traversal is "<<endl;
    Preorder_Traversal(root);
    cout<<endl;

    cout<<"Postorder Traversal is "<<endl;
    Postorder_Traversal(root);
    cout<<endl;
    return 0;
}
