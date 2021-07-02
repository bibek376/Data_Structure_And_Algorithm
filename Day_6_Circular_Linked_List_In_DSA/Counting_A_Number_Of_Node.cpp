#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Add_Empty(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=temp;
    tail=temp;
    return tail;
}

node *Add_From_End(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
    return tail;
}

void Display(node *tail){
    node *p=tail->next;
    int count=0;
    if(tail==NULL){
        cout<<"Linked List is Empty"<<endl;
    }
    else{
        do{
            count=count+1;
            cout<<p->data<<"  ";
            p=p->next;
        }while(p!=tail->next);
        cout<<endl;
        cout<<"Total number of node present in linked list is:"<<count<<endl;
    }
}

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,34);
    tail=Add_From_End(tail,45);
    tail=Add_From_End(tail,66);
    tail=Add_From_End(tail,6);
    tail=Add_From_End(tail,67);
    Display(tail);
    return 0;
}
