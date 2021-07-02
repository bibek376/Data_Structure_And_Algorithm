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

node *Insertion_After_Given_Index(node *tail,int index,int data){
    node *p=tail->next;
    node *temp=new node();
    temp->data=data;
    int i=0;
    while(i!=index){
        p=p->next;
        i++;
    }
    if(p==tail){
        temp->next=tail->next;
        temp->prev=tail;
        tail->next->prev=temp;
        tail->next=temp;
        tail=temp;
    }
    else{
        temp->next=p->next;
        temp->prev=p;
        p->next=temp;
        temp->next->prev=temp;
    }
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
    tail=Insertion_From_End(tail,45);
    tail=Insertion_From_End(tail,6);
    Display(tail);
    cout<<"Insertin A Node After Given Index"<<endl;
    tail=Insertion_After_Given_Index(tail,2,56);
    Display(tail);
    return 0;
}
