#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
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

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,34);
    cout<<"Data is:"<<tail->data<<endl;
    return 0;
}
