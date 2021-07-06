#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *front=NULL;
node *rear=NULL;

void Enqueue(int data){
    node *temp=new node();
    if(temp==NULL){
        cout<<"Queue OverFlow"<<endl;
    }
    else{
        if(rear==NULL && front==NULL){
            temp->data=data;
            temp->next=NULL;
            rear=temp;
            front=temp;
        }
        else{
            temp->data=data;
            rear->next=temp;
            temp->next=NULL;
            rear=temp;
        }
    }
}

void Dequeue(){
    if(front==NULL && rear==NULL){
        cout<<"Queue Underflow"<<endl;
    }
    else if(rear==front){
        cout<<"Dequeue Element is "<<front->data<<endl;
        rear=front=NULL;
    }
    else{
        node *p=front;
        cout<<"Dequeue Element is "<<front->data<<endl;
        front=front->next;
        free(p);
    }
}

int  isFull(){
    node *temp=new node();
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(front==NULL && rear==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void Peek(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Top of The Queue is "<<front->data<<endl;
    }
}
 
void Display(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        node *q=front;
        while(q !=NULL){
            cout<<q->data<<"  ";
            q=q->next;
        }
        cout<<endl;
    }
}

int main()
{
    Enqueue(13);
    Enqueue(67);
    Enqueue(43);
    Enqueue(7);
    Display();
    Peek();
    Dequeue();
    // Dequeue();
    // Dequeue();
    // Dequeue();
    Display();
    cout<<isFull()<<endl;
    cout<<isEmpty()<<endl;
    return 0;
}
