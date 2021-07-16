#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

node *Create_Node(int key){
    node *temp=new node();
    temp->data=key;
    temp->left=temp->right=NULL;
    return temp;
}

node *Insert(node *root,int key){
    if(root==NULL){
        return Create_Node(key);
    }
    else if(key<root->data){
        root->left=Insert(root->left,key);
    }
    else{
        root->right=Insert(root->right,key);
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

node *Inorder_predecessor(node *root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

node *Delete(node *root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->data){
        root->left=Delete(root->left,key);
    }
    else if(key>root->data){
        root->right=Delete(root->right,key);
    }
    else{
        //Case 1:- 0 Child
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
        }
        //Case 2:- 1 Child
        else if(root->left==NULL){
            node *temp=root;
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL){
            node *temp=root;
            root=root->left;
            free(temp);
        }
        //Case 3:- 2 Children
        else{
            node *temp=Inorder_predecessor(root);
            root->data=temp->data;
            root->left=Delete(root->left,temp->data);
        }
    }
    return root;
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
    Delete(root,20);
    cout<<endl;
    Inorder_Traversal(root);
    cout<<endl;
    return 0;
}
