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

node *Add_Beginning(node *tail,int data){
    node *new_node=new node();
    new_node->data=data;
    new_node->next=tail->next;
    tail->next=new_node;
    return tail;
}

//Not Possible,at the starting condition become False We can't enter into a While Loop.  
// void Display(node *tail){
//     node *p=tail->next;
//     while(p!=tail->next){
//         cout<<p->data<<"  ";
//         p=p->next;
//     }
//     cout<<endl;
// }

void Display(node *tail){
    node *p=tail->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=tail->next);
    cout<<endl;
}

int main()
{
    node *tail=NULL;
    tail=Add_Empty(tail,34);
    tail=Add_Beginning(tail,45);
    Display(tail);
    return 0;
}
