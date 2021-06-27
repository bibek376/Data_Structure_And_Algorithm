#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

node *Deleting_A_Node_In_Between(node *head,int index){
    node *p=head;
    int i=0;
    while(i !=index-1){
        p=p->link;
    }
    node *q=p->link;
    p->link=q->link;
    free(q);
    return head;
}

void Display(node *head){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<" ";
            head=head->link;
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
    head->link=second;

    second->data=98;
    second->link=third;

    third->data=3;
    third->link=NULL;

    Display(head);
    Deleting_A_Node_In_Between(head,1);
    cout<<"After Deleting a node"<<endl;
    Display(head);
    return 0;
}
