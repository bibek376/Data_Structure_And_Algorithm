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
        root=Create_Node(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

void Inorder_Traversal(node *root){
    if(root!=NULL){
        Inorder_Traversal(root->left);
        cout<<root->data<<"  ";
        Inorder_Traversal(root->right);
    }
}

bool Search(node *root,int data){
    if(root==NULL){
        return 0;
    }
    else if(root->data==data){
        return 1;
    }
    else if(data<=root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
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
    cout<<"Inorder Traversal is "<<endl;
    Inorder_Traversal(root);
    cout<<endl;

    int x;
    cout<<"Enter What You Want To Search ?"<<endl;
    cin>>x;
    if(Search(root,x)){
        cout<<"Element is Present in a Tree "<<endl;
    }
    else{
        cout<<"Element Not Found "<<endl;
    }
    return 0;
}
