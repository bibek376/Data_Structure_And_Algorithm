//Level Order Traversal
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

void Level_Order_Traversal(node *root){
    if(root==NULL){
        return;
    }
    queue<node*> Q;
    Q.push(root);
    while(!Q.empty()){
        node *p=Q.front();
        cout<<p->data<<" ";
        Q.pop();
        if(p->left!=NULL){
            Q.push(p->left);
        }
        if(p->right!=NULL){
            Q.push(p->right);
        }
    }
}



int main()
{
    node *root=NULL;
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,7);
    root=Insert(root,5);
    root=Insert(root,25);
    root=Insert(root,22);
    root=Insert(root,21);
    root=Insert(root,30);
    cout<<"Breadth First Search is"<<endl;
    Level_Order_Traversal(root);
    cout<<endl;
    return 0;
}
