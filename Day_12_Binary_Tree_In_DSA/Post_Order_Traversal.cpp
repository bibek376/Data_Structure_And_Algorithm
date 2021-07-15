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

void Post_Order(node *root){
    if(root!=NULL){
        Post_Order(root->left);
        Post_Order(root->right);
        cout<<root->data<<"  ";
    }
}

int main()
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

    cout<<"Required Post Order is"<<endl;
    Post_Order(root);
    cout<<endl;
    return 0;
}
