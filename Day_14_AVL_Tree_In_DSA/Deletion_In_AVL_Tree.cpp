#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
}; 


//To Calculate the Height of a node 
int Height(node *root){
    if(root==NULL){
        return 0;
    }
    int Left_Height=Height(root->left);
    int Right_Height=Height(root->right);
    return max(Left_Height,Right_Height)+1;
}

//Balance Factor Of a Node {-1,0,1}
int Get_Balance_Factor(node *root){
    return Height(root->left)-Height(root->right);
}

//LL Rotation (unbalance due to LL operation)
node *Right_Rotate(node *root){
    node *next=root->left;
    node *temp=next->right;
    //Performing Right Rotation
    next->right=root;
    root->left=temp;
    return next;
}

//RR Rotation (unbalance due to RR operation)
node *Left_Rotate(node *root){
    node *next=root->right;
    node *temp=next->left;
    //Performing Left Rotation
    next->left=root;
    root->right=temp;
    return next;
}

//Calculating the Inorder Predecessor of a node
node *Inorder_predecessor(node *root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}


//Insertion of a node In a AVL Tree
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


//Deletion Mechanism in a Tree
node *Deletion_In_AVL(node *root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->data){
        root->left=Deletion_In_AVL(root->left,key);
    }
    else if(key>root->data){
        root->right=Deletion_In_AVL(root->right,key);
    }
    else{
        // Case 1:- 0 Child
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
            return root;
        }
        // Case 2:- 1 Child
        else if(root->left==NULL){
            node *p=root;
            root=root->right;
            free(p);
            return root;
        }
        else if(root->right==NULL){
            node *p=root;
            root=root->left;
            free(p);
            return root;
        }
        else{
            // Case 3:- 2 Children
            node *I_P=Inorder_predecessor(root);
            root->data=I_P->data;
            root->left=Deletion_In_AVL(root->left,I_P->data);
        }
    }
    int BF;
    BF=Get_Balance_Factor(root);
    //LL Rotation
    if(BF>1 && Get_Balance_Factor(root->left)>=0){
        return Right_Rotate(root);
    }
    //RR Rotation
    else if(BF<-1 && Get_Balance_Factor(root->right)<=0){
        return Left_Rotate(root);
    }
    //LR Rotation
    else if(BF>1 && Get_Balance_Factor(root->left)==-1){
        root->left=Left_Rotate(root->left);
        return Right_Rotate(root);
    }
    //RL Rotation
    else if(BF<-1 && Get_Balance_Factor(root->right)==1){
        root->right=Right_Rotate(root->right);
        return Left_Rotate(root);
    }
    return root;
}

//Preorder Traversal(Root-Left-Right)
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
    root=Insertion_In_AVL(root,14);
    root=Insertion_In_AVL(root,17);
    root=Insertion_In_AVL(root,11);
    root=Insertion_In_AVL(root,7);
    root=Insertion_In_AVL(root,53);
    root=Insertion_In_AVL(root,4);
    root=Insertion_In_AVL(root,13);
    root=Insertion_In_AVL(root,12);
    root=Insertion_In_AVL(root,8);
    root=Insertion_In_AVL(root,60);
    root=Insertion_In_AVL(root,19);
    root=Insertion_In_AVL(root,16);
    root=Insertion_In_AVL(root,20);
    Preorder_Traversal(root);
    cout<<endl;
    cout<<"After Delete 8"<<endl;
    root=Deletion_In_AVL(root,8);
    Preorder_Traversal(root);
    cout<<endl;
    cout<<"After Delete 7"<<endl;
    root=Deletion_In_AVL(root,7);
    Preorder_Traversal(root);
    cout<<endl;
    cout<<"After Delete 11"<<endl;
    root=Deletion_In_AVL(root,11);
    Preorder_Traversal(root);
    cout<<endl;
    cout<<"After Delete 14"<<endl;
    root=Deletion_In_AVL(root,14);
    Preorder_Traversal(root);
    cout<<endl;
    cout<<"After Delete 17"<<endl;
    root=Deletion_In_AVL(root,17);
    Preorder_Traversal(root);
    cout<<endl;
    return 0;
}
