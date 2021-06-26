#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

node *Insert_A_Node_At_Beginning(node *head,int new_data){
    node *new_node=new node();
    new_node->data=new_data;
    new_node->link=head;
    head=new_node;
    return head;
}

node *Insert_A_Node_At_Last(node *ptr,int new_data){
    node *temp=new node();
    temp->data=67;
    temp->link=NULL;
    while(ptr->link !=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
    return ptr;
}

node *Insert_Between_Two_node(node *head,int new_data,int index){
    node *ptr=head;
    node *temp=new node();
    temp->data=53;
    int i=0;
    while(i !=index-1){
        ptr=ptr->link;
        i++;
    }
    temp->link=ptr->link;
    ptr->link=temp;
    return head;
}

node *Insert_After_A_Node(node *head,node *position,int data){
    node *new_node=new node();
    new_node->data=63;
    new_node->link=position->link;
    position->link=new_node;
    return head;
}

void Printing_Linked_List(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<"  ";
            head=head->link;
        }
        cout<<endl;
    }
}

int main()
{
    //Allocate the memory dynamically from heap
    node *head=new node();
    node *first=new node();
    node *second=new node();

    //First Node
    head->data=7;
    head->link=first;

    //Second Node
    first->data=12;
    first->link=second;

    //Third Node
    second->data=8;
    second->link=NULL;
    
    cout<<"Original Linked List:"<<endl;
    Printing_Linked_List(head);
    cout<<"Pree 1 For Inserting a Node At Beginning of Linked List"<<endl;
    cout<<"Pree 2 For Inserting a Node At Last of Linked List"<<endl;
    cout<<"Pree 3 For Inserting a Node Between Two Node of Linked List"<<endl;
    cout<<"Pree 4 For Inserting a Node After a Node of Linked List"<<endl;
    cout<<"Pree 5 For Exit"<<endl;
    int num;
    cout<<"Enter a Number :"<<endl;
    cin>>num;

    switch (num){
        case 1:
        head=Insert_A_Node_At_Beginning(head,3);
        break;

        case 2:
        Insert_A_Node_At_Last(head,67);
        break;

        case 3:
        Insert_Between_Two_node(head,53,2);
        break;

        case 4:
        Insert_After_A_Node(head,first,63);
        break;

        case 5:
        cout<<"Thank You"<<endl;   
    }

    cout<<"After Updating a Original Linked List:"<<endl;
    Printing_Linked_List(head);

    return 0;
}
