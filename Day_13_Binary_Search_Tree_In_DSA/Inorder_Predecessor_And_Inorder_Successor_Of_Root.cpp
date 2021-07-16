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
    temp->left=temp->right=NULL;
    return temp;
}

node *Insert(node *root,int data){
    if(root==NULL){
        return Create_Node(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

int Inorder_Predecessor_Of_Root(node *root,int key){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int Inorder_Sucessor_Of_Root(node *root,int key){
    root=root->right;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}

void Inorder_Traversal(node *root){
    if(root!=NULL){
        Inorder_Traversal(root->left);
        cout<<root->data<<"  ";
        Inorder_Traversal(root->right);
    }
}

int main()
{
    node *root=NULL;
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,30);
    root=Insert(root,7);
    root=Insert(root,15);
    root=Insert(root,34);
    Inorder_Traversal(root);
    cout<<endl;
    cout<<Inorder_Predecessor_Of_Root(root,15)<<endl;
    cout<<Inorder_Sucessor_Of_Root(root,20)<<endl;
    return 0;
}
