#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};

node *Add_Data(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}


int main()
{
    node *head=NULL;
    head=Add_Data(head,45);
    cout<<"data is "<<head->data<<endl;
    return 0;
}
