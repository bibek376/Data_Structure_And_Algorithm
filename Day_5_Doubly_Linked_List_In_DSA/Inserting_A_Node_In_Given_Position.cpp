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

node *Add_From_End(node *head,int new_data){
    node *temp=new node();
    node *ptr=head;
    temp->data=new_data;
    temp->next=NULL;
    while(ptr->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    return head;
}

node *Inserting_At_a_Given_Index(node *head,int data,int index){
    node *temp=new node();
    node *p=head;
    temp->data=data;
    //If only one node is present.
    if(p->prev==NULL){
        temp->next=p;
        temp->prev=NULL;
        p->prev=temp;
        head=temp;
    }
    else{
        int i=0;
        while(i !=index-1){
            p=p->next;
            i++;
        }
        //If we have to add node at last position of Linked List
        if(p->next==NULL){
            p->next=temp;
            temp->prev=p;
            temp->next=NULL;
        }
        // If we have to add node in between two node
        else{
            node *q=p->next;
            p->next=temp;
            temp->next=q;
            temp->prev=p;
            q->prev=temp;
        }
    }
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
    head=Add_Empty(head,3);
    Add_From_End(head,1);
    Add_From_End(head,7);
    Add_From_End(head,77);
    Display_Doubly_Linekd_List(head);
    cout<<"After inserting a data in given index"<<endl;
    head=Inserting_At_a_Given_Index(head,9,0);
    head=Inserting_At_a_Given_Index(head,99,0);
    Display_Doubly_Linekd_List(head);
    return 0;
}
