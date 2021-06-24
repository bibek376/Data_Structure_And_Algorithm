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
    node *link;
};

void display(node *head){
    if (head==NULL){
        cout<<"Linked list is empty"<<endl;
    }
    while(head != NULL){
        cout<<head->data<<" "<<endl;
        head=head->link;
    }
}

void Count_OF_Node(node *head){
    int count=0;
    if(head==NULL){
        cout<<"Linked list is empty:"<<endl;
    }
    while(head !=NULL){
        count ++;
        head=head->link;
    }
    cout<<"Numbers of node is:"<<count<<endl;
}

int main()
{
    node *head=NULL;
    node *second=NULL;
    node *third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=3;
    head->link=second;

    second->data=5;
    second->link=third;

    third->data=6;
    third->link=NULL;

    // cout<<second->link<<endl;
    // cout<<second->data<<endl;
    display(head);
    Count_OF_Node(head);

    return 0;
}
