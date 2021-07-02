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

node *Add_From_End_Side(node *tail,int data){
    node *newp=new node();
    newp->data=data;
    newp->next=tail->next;
    tail->next=newp;
    tail=newp;
    return tail;
}

node *Insertion_A_Node_After_Given_Index(node *tail,int data,int index){
    node *p=tail->next;
    node *temp=new node();
    temp->data=data;
    int i=0;
    while(i !=index){
        p=p->next;
        i++;
    }
    if (p==tail){
        temp->next=p->next;
        p->next=temp;
        tail=temp;
    }
    else{
        temp->next=p->next;
        p->next=temp;
    }
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
    tail=Add_Empty(tail,34);
    tail=Add_From_End_Side(tail,45);
    tail=Add_From_End_Side(tail,6);
    tail=Add_From_End_Side(tail,67);
    Display(tail);
    cout<<"After Given Index:"<<endl;
    tail=Insertion_A_Node_After_Given_Index(tail,43,3);
    Display(tail);
    return 0;
}
