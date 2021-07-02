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

//O(1) complexity..
node *Deleting_A_First_Node(node *tail){
    node *temp=tail->next;
    tail->next=temp->next;
    free(temp);
    temp=NULL;
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
    tail=Add_From_End(tail,67);
    Display(tail);
    cout<<"After Deleting A First Node"<<endl;
    Deleting_A_First_Node(tail);
    Display(tail);
    return 0;
}
