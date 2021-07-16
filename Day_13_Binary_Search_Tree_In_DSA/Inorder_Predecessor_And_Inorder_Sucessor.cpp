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
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

//Declaring Store variable as a global Variable
node *store_Right=NULL;
//For Inorder Predecessor
//case 1: If Tree Having a Left child
//        -->root->left
//        -->Findout the rightmost node

//Case 2:If Tree Don't Have a left Child
//If the node 'key' Don't have a left subtree,search that node from the root and the
//node from where we take the last right is the answer

void Inorder_Predecessor(node *root,int key){
    if(root==NULL){
        cout<<"Tree is Empty"<<endl;
    }
    else if(key<root->data){
        Inorder_Predecessor(root->left,key);
    }
    else if(key>root->data){
        store_Right=root;
        Inorder_Predecessor(root->right,key);
    }
    else{
        if(root->left!=NULL){
            root=root->left;
            while(root->right!=NULL){
            root=root->right;
        }
        cout<<root->data;
        }
        else if(store_Right==NULL){//If First Element of Tree
            cout<<"Preorder Does not Exist"<<endl;
        }
        else{
            cout<<store_Right->data;
        }
    }
}

node *Store_Left=NULL;
void Inorder_Sucessor(node *root,int key){
    if(root==NULL){
        cout<<"Tree is Empty"<<endl;
    }
    else if(key<root->data){
        Store_Left=root;
        Inorder_Sucessor(root->left,key);
    }
    else if(key>root->data){
        Inorder_Sucessor(root->right,key);
    }
    else{
        if(root->right!=NULL){
            root=root->right;
            while(root->left!=NULL){
                root=root->left;
            }
            cout<<root->data;
        }
        else if(Store_Left==NULL){
            cout<<"Inorder Sucessor Does't Exist"<<endl;
        }
        else{
            cout<<Store_Left->data;
        }
    }
}


void Inorder_Traversal(node *root){
    if(root!=NULL){
        Inorder_Traversal(root->left);
        cout<<root->data<<"  ";
        Inorder_Traversal(root->right);
    }
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
    cout<<"Inorder Predecessor of 34 is"<<endl;
    Inorder_Predecessor(root,34);
    cout<<endl;
    cout<<"For 34"<<endl;
    Inorder_Sucessor(root,34);
    cout<<endl;
    return 0;
}
