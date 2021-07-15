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


//There are Two Convention To Define Height of BST
//1>Number of node on longest path from root to the deepest node.
//2>Number of edges on longest path from root to the deepest node
int Height_Of_BST(node *root){
    if(root==NULL){
        return -1;
    }
    int Height_Of_Left_Sub_Tree=Height_Of_BST(root->left);
    int Height_Of_Right_Sub_Tree=Height_Of_BST(root->left);
    return max(Height_Of_Left_Sub_Tree,Height_Of_Right_Sub_Tree)+1;
}

void Inorder(node *root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<"  ";
        Inorder(root->right);
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
    root=Insert(root,1);
    cout<<"Inorder Traversal is"<<endl;
    Inorder(root);
    cout<<endl;
    cout<<"Height of a Tree using Edge Convention is:"<<Height_Of_BST(root)<<endl;
    return 0;
}
