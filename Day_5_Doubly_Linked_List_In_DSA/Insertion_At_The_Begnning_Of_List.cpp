#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};

node *ADD_Empty(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}

node *Insert_At_Begnning(node *head,int data){
    node *temp=new node();
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

void Display_Doubly_Linekd_List(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<"  ";
            head=head->next;
        }
        cout<<endl;
    }
}

int main()
{
    node *head=NULL;
    head=ADD_Empty(head,45);
    head=Insert_At_Begnning(head,63);
    head=Insert_At_Begnning(head,66);
     head=Insert_At_Begnning(head,99);
    Display_Doubly_Linekd_List(head);
    return 0;
}
