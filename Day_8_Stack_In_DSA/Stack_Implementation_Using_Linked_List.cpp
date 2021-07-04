#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

//If No element on stack
int isEmpty(node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(node *top){
    node *p=new node();
    if(p==NULL){//If can not allocate memory dynamically 
        return 1;
    }
    else{
        return 0;
    }
}


//O(n) Time Complexity
int size(node *top){
    int count=0;
    while(top!=NULL){
        count=count+1;
        top=top->next;
    }
    return count;
}

//O(n) Time Complexity
int peek(node *top,int index){
    node *p=top;
    int i=0;
    if(index<size(top)){
        while(i!=index){
        p=p->next;
        i++;
    }
    }
    else{
        cout<<"Index Out Of Range"<<endl;
        exit(1);
    }
    return p->data;
}

//O(1) Time Complexity
node *push(node *top,int data){
    node *temp=new node();
    if(isFull(top)){
        cout<<"Stack OverFlow"<<endl;
    }
    else{
        temp->data=data;
        temp->next=top;
        top=temp;
    }
    return top;
}

//O(1) Time Complexity
node *pop(node *top){
    node *p=top;
    if(isEmpty(top)){
        cout<<"Stack UnderFlow"<<endl;
        exit(1);
    }
    top=top->next;
    free(p);
    return  top;
}


//O(1) Time Complexity
int Top_Element(node *top){
    if(top==NULL){
        cout<<"Nothing on Top"<<endl;
        exit(1);
    }
    return top->data;
}

void Display(node *top){
    if(top==NULL){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        while(top!=NULL){
            cout<<top->data<<"  ";
            top=top->next;
        }
        cout<<endl;
    }
}

int main()
{
    node *top=NULL;
    top=push(top,3);
    top=push(top,7);
    top=push(top,17);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);//For underflow condition
    cout<<"Stack Elements are"<<endl;
    Display(top);
    cout<<"1 if Empty otherwise 0 "<<endl<<isEmpty(top)<<endl;
    cout<<"Checking stack status o for non empty 1 for empty: "<<endl<<isEmpty(top)<<endl;
    cout<<"Size of the Stack is:"<<size(top)<<endl;
    cout<<"Top Element of Stack is:"<<Top_Element(top)<<endl;
    cout<<peek(top,3)<<endl;
   return 0;
}