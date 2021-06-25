#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Inserting_a_Node_at_Given_Index(node *head,int data,int index){
    node *new_node=new node();
    node *ptr=head;
    new_node->data=1;
    int i=0;
    while(i !=index-1){
        ptr=ptr->next;
        i++;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;

    return head;
}

void Traversing_a_Linked_List(node *head){
    if(head ==NULL){
        cout<<"Linked List is empty:"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<endl;
            head=head->next;
        }
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

    // Traversing_a_Linked_List(head);
    
    int index=2;
    head=Inserting_a_Node_at_Given_Index(head,1,index);

    Traversing_a_Linked_List(head);




    return 0;
}
