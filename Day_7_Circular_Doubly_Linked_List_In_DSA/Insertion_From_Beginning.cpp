#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;
};

node *Add_First(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=temp;
    temp->prev=temp;
    tail=temp;
    return temp;
}

node *Insertion_From_Beginning(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    temp->prev=tail;
    tail->next=temp;
    temp->next->prev=temp;
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
    tail=Add_First(tail,34);
    Insertion_From_Beginning(tail,43);
    Insertion_From_Beginning(tail,67);
    Display(tail);
    return 0;
}
