#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};

node *Add_Empty(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    head=temp;
    return head;
}

node *Add_From_Front(node *head,int data){
    node *temp=new node();
    temp->data=data;
    temp->prev=NULL;
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

node *Add_Node_From_End_Side(node *head,int data){
    node *temp=new node();
    node *ptr=head;
    temp->data=data;
    temp->next=NULL;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
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
    head=Add_Empty(head,6);
    // head=Add_From_Front(head,7);
    // head=Add_From_Front(head,8);
    // head=Add_From_Front(head,9);
    Add_Node_From_End_Side(head,7);
    Add_Node_From_End_Side(head,8);
    Display_Doubly_Linekd_List(head);
    return 0;
}
