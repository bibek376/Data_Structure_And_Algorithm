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

void  Sum_At_Level(node *root,int k){
    if(root==NULL){
        return;
    }
    int sum=0;
    int level=0;
    queue<node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        node *p=Q.front();
        Q.pop();
        if(p!=NULL){
            cout<<p->data<<"  ";
            if(level==k){
                sum+=p->data;
            }
            if(p->left!=NULL){
                Q.push(p->left);
            }
            if(p->right!=NULL){
                Q.push(p->right);
            }
        }
        else if(!Q.empty()){
            Q.push(NULL);
            level++;
        }
    }
    cout<<endl;
    cout<<"Sum of "<<k<<" th level is "<<sum<<endl;
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
    cout<<"Level Order Traversal is "<<endl;
    Sum_At_Level(root,1);
    cout<<endl;
    return 0;
}
