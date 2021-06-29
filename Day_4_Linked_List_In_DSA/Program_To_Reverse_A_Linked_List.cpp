#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

node *Reversing_A_Linked_List(node *head){
    node *temp=NULL;
    node *temp2=NULL;
    while(head !=NULL){
        temp2=head->link;
        head->link=temp;
        temp=head;
        head=temp2;
    }
    head=temp;
    return head;
}

void Display(node *head){
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
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
    node *head=new node();
    node *second=new node();
    node *third=new node();
    node *fourth=new node();

    head->data=45;
    head->link=second;

    second->data=9;
    second->link=third;

    third->data=3;
    third->link=fourth;

    fourth->data=5;
    fourth->link=NULL;

    cout<<"Before Reversing a Linked List:"<<endl;
    Display(head);
    head=Reversing_A_Linked_List(head);
    cout<<"After Reversing a Linked List"<<endl;
    Display(head);

    return 0;
}
