#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};

node *Add_Empty(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}

node *Add_From_End(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    node *p=head;
    while(p->next !=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
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
    head=Add_Empty(head,34);
    Add_From_End(head,45);
    Add_From_End(head,9);
    Display_Doubly_Linekd_List(head);
    return 0;
}
