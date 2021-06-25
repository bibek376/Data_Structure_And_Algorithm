#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

// node *Insert_At_Front(node *head,int new_data){
//     node *ptr=new node();
//     ptr->data=new_data;
//     ptr->link=head;
//     head=ptr;
//     return head;
// }

void Insert_At_Front(node **head,int new_data){
    node *new_node=new node();
    new_node->data=new_data;
    new_node->link=*head;
    *head=new_node;
}

void Display(node *head){
    while(head !=NULL){
        cout<<head->data<<endl;
        head=head->link;
    }
}

int main()
{
    node *head=new node();
    node *second=new node();

    head->data=45;
    head->link=second;

    second->data=73;
    second->link=NULL;

    Display(head);
    
    cout<<"After Inserting a Value:"<<endl;
    // head=Insert_At_Front(head,97);
    Insert_At_Front(&head,97);

    Display(head);

    return 0;
}
