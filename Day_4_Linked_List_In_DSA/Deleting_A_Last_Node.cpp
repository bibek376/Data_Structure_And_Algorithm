#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Deleting_A_Last_Node(node *head){
    node *ptr1=head;
    node *ptr2=head;
    while(ptr1->next !=NULL){
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    ptr2->next=NULL;
    free(ptr1);
    return head;
}

void Display(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}


int main()
{
    node *head=new node();
    node *second=new node();
    node *third=new node();

    head->data=45;
    head->next=second;

    second->data=98;
    second->next=third;

    third->data=3;
    third->next=NULL;

    Display(head);
    Deleting_A_Last_Node(head);
    cout<<"After Deleting a last node"<<endl;
    Display(head);
    return 0;
}
