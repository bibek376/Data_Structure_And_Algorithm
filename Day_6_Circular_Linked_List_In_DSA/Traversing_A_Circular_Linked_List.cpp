#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *Add_Empty(node *tail,int data){
    node *new_node=new node();
    new_node->data=data;
    new_node->next=new_node;
    tail=new_node;
    return tail;
}

node *Add_From_Beginning(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return tail;
}

void Display(node *tail){
    node *p=tail->next;
    do{
        cout<<p->data<<"  ";
        p=p->next;
    }while(p !=tail->next);
    cout<<endl;
}

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,4);
    Add_From_Beginning(tail,6);
    Add_From_Beginning(tail,7);
    Add_From_Beginning(tail,67);
    Add_From_Beginning(tail,53);
    Display(tail);
    return 0;
}
