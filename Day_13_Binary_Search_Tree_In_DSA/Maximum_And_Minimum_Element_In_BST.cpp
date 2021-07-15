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
        root=Create_Node(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

//Using Recursive Function
int Maximum_Number(node *root){
    if(root==NULL){
        cout<<"BST Is Empty"<<endl;
    }
    else if(root->right==NULL){
        return root->data;
    }
    return Maximum_Number(root->right);
}

// //Using Iterative Approach
// int Maximum_Number(node *root){
//     node *p=root;
//     if(p==NULL){
//         cout<<"BST Is Empty"<<endl;
//     }
//     else{
//         while(p->right!=NULL){
//             p=p->right;
//         }
//         return p->data;
//     }
//     return 0;
// }

// //Using Recursive Method
// int Minimum_Number(node *root){
//     if(root==NULL){
//         cout<<"BST Is Empty"<<endl;
//     }
//     else if(root->left==NULL){
//         return root->data;
//     }
//     else{
//         return Minimum_Number(root->left);
//     }
//     return 0;
// }

//Using Iterative MEthod
int Minimum_Number(node *root){
    if(root==NULL){
        cout<<"BST is Empty"<<endl;
    }
    else{
        while(root->left!=NULL){
            root=root->left;
        }
        return root->data;
    }
    return 0;
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
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);
    cout<<"Inorder Traversal is "<<endl;
    Inorder_Traversal(root);
    cout<<endl;
    cout<<"Maximum Element is "<<Maximum_Number(root)<<endl;
    cout<<"Minimum Number is "<<Minimum_Number(root)<<endl;
    return 0;
}
