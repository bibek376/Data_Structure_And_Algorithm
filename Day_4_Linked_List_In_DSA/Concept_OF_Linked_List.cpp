#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// pointer syntax
// data_type *var_name;

// dynamic memory allocation syntax
// pointer_name=new data_type();



class node{
    public:
    int data;
    node *next;
};


int main()
{
    // Creating a 3 node with no memory
    node *head=NULL;
    node *first=NULL;
    node *second=NULL;

    // Allocate 3 node in Heap memory
    head=new node();
    first=new node();
    second=new node();

    // Arrow operator
    // Pointer_name->variable_name
    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=NULL;

    cout<<first->data<<endl;

    return 0;
}
