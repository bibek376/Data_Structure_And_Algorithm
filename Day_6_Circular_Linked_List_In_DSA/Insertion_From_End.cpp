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

node *Add_From_Beginning(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    tail->next=temp;
    return tail;
}

node *Add_From_End_Side(node *tail,int data){
    node *newp=new node();
    newp->data=data;
    newp->next=tail->next;
    tail->next=newp;
    tail=newp;
    return tail;
}

void Display(node *tail){
    node *p=tail->next;
    do{
        cout<<p->data<<"  ";
        p=p->next;
    }while(p!=tail->next);
    cout<<endl;
}

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,6);
    Add_From_Beginning(tail,45);
    Add_From_Beginning(tail,34);
    Display(tail);
    cout<<"After Inserting a Node From End side"<<endl;
    tail=Add_From_End_Side(tail,56);
    tail=Add_From_End_Side(tail,63);
    tail=Add_From_End_Side(tail,53);
    Display(tail);
    return 0;
}
