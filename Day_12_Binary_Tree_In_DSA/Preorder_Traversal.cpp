#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};

void Pre_order(node *root){
    if(root!=NULL){
        cout<<root->data<<"  ";
        Pre_order(root->left);
        Pre_order(root->right); 
    }
}

int main()
{
    node *root=new node();
    node *p1=new node();
    node *p2=new node();
    node *p3=new node();
    node *p4=new node();

    root->data=3;
    root->left=p1;
    root->right=p2;

    p1->data=4;
    p1->left=p3;
    p1->right=p4;

    p3->data=9;
    p3->left=NULL;
    p3->right=NULL;

    p4->data=7;
    p4->left=NULL;
    p4->right=NULL;

    p2->data=13;
    p2->left=NULL;
    p2->right=NULL;

    Pre_order(root);
    cout<<endl;    
    return 0;
}
