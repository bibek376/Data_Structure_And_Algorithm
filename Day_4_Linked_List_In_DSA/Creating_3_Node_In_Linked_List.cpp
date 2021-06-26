#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node *next;
};

void display(node *head){
    if(head==NULL){
        cout<<"Print Linked List is empty"<<endl;
    }
    while(head !=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{
    // Creating a First Node
    node *head=new node(); //Allocate a memory dynamically from heap
    head->data=2;
    head->next=NULL;

    // Creating a second node 
    node *current=new node();//Allocate a memory dynamically
    current->data=4;
    current->next=NULL;
    head->next=current;

    // Creating a Third node
    current=new node();
    current->data=6;
    current->next=NULL;
    head->next->next=current;

    // node *second=new node();
    // second->data=6;
    // second->next=NULL;
    // current->next=second;

    // cout<<current->next<<endl;
    display(head);


    return 0;
}
