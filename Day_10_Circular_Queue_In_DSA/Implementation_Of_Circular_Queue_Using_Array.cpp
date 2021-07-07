#include<iostream>
#include<bits/stdc++.h>
#define MAX 5
using namespace std;

//Global Declaration
int circular_queue_arr[MAX];
int front=-1;
int rear=-1;


void Enqueue(int data){
    if((rear+1)%MAX==front){
        cout<<"Circular Queue Overflow"<<endl;
    }
    else if(rear==-1 && front==-1){
        rear=front=0;
        circular_queue_arr[rear]=data;
    }
    else{
        rear=(rear+1)%MAX;
        circular_queue_arr[rear]=data;
    }
}

void Dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Circular Queue Underflow"<<endl;
    }
    else if(front==rear){
        cout<<"Dequed Element is "<<circular_queue_arr[front]<<endl;
        front=rear=-1;
    }
    else{
        cout<<"Dequed Element is "<<circular_queue_arr[front]<<endl;
        front=(front+1)%MAX;
    }
}

bool isEmpty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isFull(){
    if((rear+1%MAX==front)){
        return 1;
    }
    else{
        return 0;
    }
}

void First_Element(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"First Element of Queue is "<<circular_queue_arr[front]<<endl;
    }
}

void Last_Element(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Last Element of Queue is "<<circular_queue_arr[rear]<<endl;
    }
}

void Display(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        int i=front;
        while(i!=rear){
            cout<<circular_queue_arr[i]<<"  ";
            i=(i+1)%MAX;
        }
        cout<<circular_queue_arr[rear]<<endl;
    }
}

int main()
{
    Enqueue(7);
    Enqueue(3);
    Enqueue(45);
    Enqueue(1);
    Enqueue(4);
    // Enqueue(3);
    Display();
    Dequeue();
    Dequeue();
    // Enqueue(3);
    cout<<"After  Dequeue The Element "<<endl;
    Display();
    Enqueue(3);
    cout<<"After Inserting new Value"<<endl;
    Display();
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is Not Empty"<<endl;
    }
    return 0;
}
