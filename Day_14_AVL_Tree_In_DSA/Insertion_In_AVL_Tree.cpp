#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};


int Height(node *root){
    if(root==NULL){
        return 0;
    }
    int Left_Height=Height(root->left);
    int Right_Height=Height(root->right);
    return max(Left_Height,Right_Height)+1;
}

int Get_Balance_Factor(node *root){
    return Height(root->left)-Height(root->right);
}

node *Right_Rotate(node *root){
    node *next=root->left;
    node *temp=next->right;
    //Performing Right Rotation
    next->right=root;
    root->left=temp;
    return next;
}

node *Left_Rotate(node *root){
    node *next=root->right;
    node *temp=next->left;
    //Performing Left Rotation
    next->left=root;
    root->right=temp;
    return next;
}

node *Create_Node(int data){
    node *temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

node *Insertion_In_AVL(node *root,int data){
    if(root==NULL){
        return Create_Node(data);
    }
    else if(data<root->data){
        root->left=Insertion_In_AVL(root->left,data);
    }
    else{
        root->right=Insertion_In_AVL(root->right,data);
    }
    int BF;
    BF=Get_Balance_Factor(root);
    //LL Rotation
    if(BF>1 && data<root->left->data){
        return Right_Rotate(root);
    }
    //RR Rotation
    else if(BF<-1 && data>root->right->data){
        return Left_Rotate(root);
    }
    //RL Rotation
    else if(BF<-1 && data<root->right->data){
        root->right=Right_Rotate(root->right);
        return Left_Rotate(root);
    }
    //LR Rotation
    else if(BF>1 && data>root->left->data){
        root->left=Left_Rotate(root->left);
        return Right_Rotate(root);
    }
    return root;
}

void Preorder_Traversal(node *root){
    if(root!=NULL){
        cout<<root->data<<"  ";
        Preorder_Traversal(root->left);
        Preorder_Traversal(root->right);
    }
}

int main()
{
    node *root=NULL;
    root=Insertion_In_AVL(root,15);
    root=Insertion_In_AVL(root,10);
    root=Insertion_In_AVL(root,20);
    root=Insertion_In_AVL(root,50);
    root=Insertion_In_AVL(root,35);
    root=Insertion_In_AVL(root,55);
    Preorder_Traversal(root);
    cout<<endl;
    return 0;
}
