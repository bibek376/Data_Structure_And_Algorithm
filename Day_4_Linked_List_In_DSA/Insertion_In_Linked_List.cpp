// Insert a node at the end of the Linked List
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * link;//Self refrencing structure
};

void Insert_At_Last(node *ptr,int new_data){
    node *new_node=new node();

    new_node->data=new_data;
    new_node->link=NULL;

    while(ptr->link !=NULL){
        ptr=ptr->link;
    }
    ptr->link=new_node;
}

void Print_Linked_List(node *ptr){
    while(ptr !=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }
}

int main()
{
    // Allocate memory dynamically to each node from Heap
    node *head=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();

    head->data=1;
    head->link=second;
    
    second->data=2;
    second->link=third;
    
    third->data=3;
    third->link=fourth;
    
    fourth->data=4;
    fourth->link=NULL;

    Insert_At_Last(head,67);

    Print_Linked_List(head);


    return 0;
}
