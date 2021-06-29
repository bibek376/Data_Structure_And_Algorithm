#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};

node *Add_Empty(node *head,int new_data){
    node *temp=new node();
    temp->data=new_data;
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    return head;
}

node *Add_From_End(node *head,int new_data){
    node *temp=new node();
    temp->data=new_data;
    temp->next=NULL;
    node *p=head;
    while(p->next !=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    return head;
}

node *Deleting_Last_Node(node *head){
    node *p=head;
    while(p->next !=NULL){
        p=p->next;
    }
    node *q=p->prev;
    q->next=NULL;
    free(p);
    p=NULL;
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
    Add_From_End(head,49);
    Display_Doubly_Linekd_List(head);
    cout<<"After Deleting a Last Node"<<endl;
    Deleting_Last_Node(head);
    Display_Doubly_Linekd_List(head);
    return 0;
}
