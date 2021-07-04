#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};

node *Add_Empty(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=temp;
    temp->prev=temp;
    tail=temp;
    return temp;
}

node *Add_From_End(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    return tail;
}

node *Deleting_A_Last_Node(node *tail){
    node *p=tail->prev;
    p->next=tail->next;
    tail->next->prev=p;
    free(tail);
    tail=p;
    return tail;
}

void Display(node *tail){
    if(tail==NULL){
        cout<<"Linked List is Empty"<<endl;
    }
    else{
        node *p=tail->next;
        do{
            cout<<p->data<<"  ";
            p=p->next;
        }while(p!=tail->next);
        cout<<endl;
    }
}

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,34);
    tail=Add_From_End(tail,45);
    tail=Add_From_End(tail,6);
    Display(tail);
    cout<<"After Deleting a Last Node"<<endl;
    tail=Deleting_A_Last_Node(tail);
    Display(tail);
    return 0;
}
