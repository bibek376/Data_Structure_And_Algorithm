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

node *Insertion_From_End(node *tail,int data){
    node *temp=new node();
    node *p=tail->next;
    temp->data=data;
    temp->next=tail->next;
    temp->prev=tail;
    temp->prev->next=temp;
    p->prev=temp;
    tail=temp;
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
    tail=Insertion_From_End(tail,4);
    tail=Insertion_From_End(tail,67);
    tail=Insertion_From_End(tail,43);
    Display(tail);
    return 0;
}
