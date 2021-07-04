#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char data;
    node *next;
};

node *push(node *top,char data){
    node *temp=new node();
    if(temp==NULL){
        cout<<"Stack overflow"<<endl;
        exit(1);
    }
    temp->data=data;
    temp->next=top;
    top=temp;
    return top;
}

node *pop(node *top){
    if(top==NULL){
        cout<<"Stack underFlow"<<endl;
        exit(1);
    }
    else{
        node *q=top;
        top=top->next;
        free(q);
        return top;
    }
}

void Display(node *top){
    if(top==NULL){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        while(top!=NULL){
            cout<<top->data<<" ";
            top=top->next;
        }
        cout<<endl;
    }
}

int main()
{
    node *top=NULL;
    top=push(top,')');
    top=push(top,'1');
    top=push(top,'+');
    top=push(top,'8');
    top=push(top,'(');
    top=push(top,'-');
    top=push(top,'2');
    top=push(top,'*');
    top=push(top,'3');
    // top=pop(top);
    cout<<"Expression is:"<<endl;
    Display(top);
    return 0;
}
