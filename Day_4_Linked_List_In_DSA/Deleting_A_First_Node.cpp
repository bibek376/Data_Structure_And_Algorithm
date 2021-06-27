#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link;
};

node *Deleting_A_First_Node(node *head){
    node *temp=head;
    head=head->link;
    free(temp);
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
    head=Deleting_A_First_Node(head);
    cout<<"After Delete First Node"<<endl;
    Display(head);

    return 0;
}
