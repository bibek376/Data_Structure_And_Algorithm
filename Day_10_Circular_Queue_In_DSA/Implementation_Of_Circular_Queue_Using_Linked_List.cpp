#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

//Global Declaration;
node *front=NULL;
node *rear=NULL;

void Enqueue(int data){
    node *temp=new node();
    if(temp==NULL){
        cout<<"Queue Overflow"<<endl;
    }
    else if(front==NULL && rear==NULL){
        temp->data=data;
        temp->next=temp;
        front=temp;
        rear=temp;
    }
    else{
        temp->data=data;
        rear->next=temp;
        temp->next=front;
        rear=temp;
    }
}

void Dequeue(){
    node *p=front;
    if(front==NULL && rear==NULL){
        cout<<"Queue Underflow"<<endl;
    }
    else if(front==rear){
        cout<<"Dequed Element is "<<front->data;
        front=rear=NULL;
        free(p);
    }
    else{
        cout<<"Dequed Element is "<<p->data<<endl;
        front=front->next;
        rear->next=front;
        free(p);
    }
}

bool isFull(){
    node *temp=new node();
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

bool isEmpty(){
    if(front==NULL && rear==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void Front_Value(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Front Value is "<<front->data<<endl;
    }
}

void Last_Value(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Last Value is "<<rear->data<<endl;
    }
}

void Display(){
    if(front==NULL && rear==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        node *p=front;
        do{
            cout<<p->data<<"  ";
            p=p->next;
        }while(p!=rear->next);
        cout<<endl;
    }
}

int main()
{
    Enqueue(7);
    Enqueue(3);
    Enqueue(2);
    Display();
    Dequeue();
    Display();
    Last_Value();
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    return 0;
}
