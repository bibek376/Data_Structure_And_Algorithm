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

node *Entire_Doubly_Linked_List(node *head){
    int n;
    cout<<"Enter How Many Node You Want To Insert ?"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Linked list is Empty"<<endl;
    }
    else{
        int data;
        cout<<"Enter the data for 1 Node"<<endl;
        cin>>data;
        head=Add_Empty(head,data);

        for(int i=1;i<n;i++){
            cout<<"Enter the data for "<<i+1<<" Node"<<endl;
            cin>>data;
            Add_From_End(head,data);
        }
    }
    return head;
}

node *Deleting_By_Index(node *head,int index){
    node *p=head;
    int i=0;
    while(i !=index-1){
        p=p->next;
        i++;
    }
    node *q=p->next;
    node *r=q->next;
    p->next=r;
    r->prev=p;
    free(q);
    q=NULL;
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
    head=Entire_Doubly_Linked_List(head);
    Display_Doubly_Linekd_List(head);
    cout<<"After Deleting a node "<<endl;
    Deleting_By_Index(head,2);
    Display_Doubly_Linekd_List(head);
    return 0;
}
