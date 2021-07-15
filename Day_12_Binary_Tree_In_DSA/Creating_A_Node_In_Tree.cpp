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
    node *root=new node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}

int main()
{
    node *root=NULL;
    node *p1=NULL;
    node *p2=NULL;
    root=Create_Node(2);
    p1=Create_Node(1);
    p2=Create_Node(4);

    root->left=p1;
    root->right=p2;
    return 0;
}
