#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

void Inorder_Traversal(node *p){
    if(p!=NULL){
        Inorder_Traversal(p->left);
        cout<<p->data<<"  ";
        Inorder_Traversal(p->right);
    }
}

void Preorder_Traversal(node *p){
    if(p!=NULL){
        cout<<p->data<<"  ";
        Preorder_Traversal(p->left);
        Preorder_Traversal(p->right);
    }
}

void Postorder_Traversal(node *p){
    if(p!=NULL){
        Postorder_Traversal(p->left);
        Postorder_Traversal(p->right);
        cout<<p->data<<"  ";
    }
}

node *Create_Node(int data){
    node *temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

int main(int argc, char const *argv[])
{
    node *root=NULL;
    node *p1=NULL;
    node *p2=NULL;
    node *p3=NULL;
    node *p4=NULL;

    root=Create_Node(3);
    p1=Create_Node(4);
    p2=Create_Node(13);
    p3=Create_Node(9);
    p4=Create_Node(7);

    root->left=p1;
    root->right=p2;

    p1->left=p3;
    p1->right=p4;

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
