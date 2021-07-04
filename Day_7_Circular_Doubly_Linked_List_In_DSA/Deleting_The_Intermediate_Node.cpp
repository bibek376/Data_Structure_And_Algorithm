#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};

node *Add_Empty(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=temp;
    temp->prev=temp;
    tail=temp;
    return temp;
}

//O(1) Time complexity
node *Add_From_End(node *tail,int data){
    node *temp=new node();
    temp->data=data;
    temp->next=tail->next;
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    return tail;
}

//O(n) Time Complexity
node *Deleting_Intermediate_Node(node *tail,int index){
    node *p=tail->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    node *q=p->next;
    p->next=q->next;
    q->next->prev=p;
    free(q);
    return q;
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
    cout<<"After Deleting Intermediate Node"<<endl;
    Deleting_Intermediate_Node(tail,2);
    Display(tail);
    return 0;
}
