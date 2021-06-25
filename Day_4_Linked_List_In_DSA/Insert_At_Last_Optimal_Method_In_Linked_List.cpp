#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

node *add_at_the_end(node *ptr,int data){
    node *new_node=new node();
    new_node->data=data;
    new_node->link=NULL;

    ptr->link=new_node;
    return new_node;
}

int main()
{
    node *head=new node();
    head->data=45;
    head->link=NULL;

    node *ptr=head;
    ptr=add_at_the_end(ptr,98);
    ptr=add_at_the_end(ptr,3);
    ptr=add_at_the_end(ptr,67);

    ptr=head;
    while(ptr !=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }

    return 0;
}
