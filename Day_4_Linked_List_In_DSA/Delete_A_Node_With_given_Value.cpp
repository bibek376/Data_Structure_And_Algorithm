#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Delete_With_Value(node *head,int value){
    node *p=head;
    node *q=head;
    while(value !=p->data && p->next !=NULL){
        q=p;
        p=p->next;
    }
    if(value== p->data){
        q->next=p->next;
        free(p);
    }
    else{
        cout<<"Value not found:"<<endl;
    }
    return head;
}

void Display(node *head){
    if(head==NULL){
        cout<<"nexted List is empty"<<endl;
    }
    else{
        while(head !=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
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
    Delete_With_Value(head,3);
    cout<<"After deleting a node"<<endl;
    Display(head);
    return 0;
}
