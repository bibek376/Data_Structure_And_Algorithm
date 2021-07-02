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

int Search_Element(node *tail,int element){
    node *temp=tail->next;
    int index=0;
    do{
        if(temp->data==element){
            return index;
        }
        else{
            temp=temp->next;
            index++;
        }
    }while(temp!=tail->next);
    return -1; 
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
    tail=Add_From_End(tail,66);
    tail=Add_From_End(tail,6);
    tail=Add_From_End(tail,67);
    Display(tail);
    cout<<Search_Element(tail,56)<<endl;
    return 0;
}
