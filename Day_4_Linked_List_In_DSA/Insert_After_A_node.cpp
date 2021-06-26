#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Insert_After_A_Node(node *head,node *prev_node,int data){
    node *new_node=new node();
    new_node->data=data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

    return head;
}

void Display(node *head){
    while(head !=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main()
{
    node *head= new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();
    node *fifth=new node();

    head->data=8;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=11;
    third->next=fourth;

    fourth->data=7;
    fourth->next=fifth;

    fifth->data=2;
    fifth->next=NULL;

    Display(head);

    cout<<"After inserting a element"<<endl;

    head=Insert_After_A_Node(head,third,67);
    Display(head);

    return 0;
}
