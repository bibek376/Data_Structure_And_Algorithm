//Queue Implementation using Array Without Dynamic Memory Allocation
#include<iostream>
#include<bits/stdc++.h>
#define MAX 5
using namespace std;

//Global Declaration Because This things we have use again and again in every method
int queue_arr[MAX];
int rear=-1;
int front=-1;

//Enqueue -->Insert-->Rear-->Tail
void Enqueue(int data){
    if(rear==MAX-1){
        cout<<"Queue Overflow"<<endl;
    }
    else if(rear==-1 && front==-1){
        rear=0;
        front=0;
        queue_arr[rear]=data;
    }
    else{
        rear=rear+1;
        queue_arr[rear]=data;
    }
}

//Dequeue-->Delete-->Front-->Head
void Dequeue(){
    if(rear==-1 && front==-1){
        cout<<"Queue Underflow"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"Dequeue Element is "<<queue_arr[front]<<endl;
        front=front+1;
    }
}

void peek(){
    if(front==-1 && rear==-1){
        cout<<"Nothing in Queue"<<endl;
    }
    else{
        cout<<"Top value of Queue is "<<queue_arr[front]<<endl;
    }
}

int isFull(){
    if(rear==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

//First Value Of Queue
void First_Value(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"First value of Queue is "<<queue_arr[front]<<endl;
    }
}

//Last Value Of Queue
void Last_Value(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Last Element of Queue is "<<queue_arr[rear]<<endl;
    }
}

void Display(){
    if(rear==-1 && front==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        for(int i=front;i<rear+1;i++){
            cout<<queue_arr[i]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    Enqueue(7);
    Enqueue(5);
    Enqueue(-1);
    Enqueue(13);
    Display();
    Dequeue();
    Display();
    peek();
    cout<<isEmpty()<<endl;
    First_Value();
    Last_Value();
    return 0;
}
