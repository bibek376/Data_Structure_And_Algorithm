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
    else if(data<root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

//O(n) is Time Complexiity
bool Is_BST(node *root,int MIN,int MAX){
    if(root==NULL){
        return 1;
    }
    else if(root->data<=MIN || root->data>MAX){
        return 0;
    }
    return Is_BST(root->left,MIN,root->data)&&Is_BST(root->right,root->data,MAX);
}

int main()
{
    node *root=NULL;
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,7);
    root=Insert(root,25);
    root=Insert(root,22);
    if(Is_BST(root,INT_MIN,INT_MAX)){
        cout<<"Tree is BST "<<endl;
    }
    else{
        cout<<"Tree is not BST "<<endl;
    }
    return 0;
}
