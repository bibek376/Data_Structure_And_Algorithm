#include<iostream>
#include<bits/stdc++.h>
#define MAX 5
using namespace std;

//Global Declaration
int rear=-1;
int front=-1;
int dqueue_arr[MAX];

void Enqueuefront(int data){
    if(front==(rear+1)%MAX){
        cout<<"Queue Overflow"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        dqueue_arr[front]=data;
    }
    else if(front==0){
        front=MAX-1;
        dqueue_arr[front]=data;
    }
    else{
        front--;
        dqueue_arr[front]=data;
    }
}

void Enqueuerear(int data){
    if(front==(rear+1)%MAX){
        cout<<"Queue is Overflow"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        dqueue_arr[rear]=data;
    }
    else if(rear=MAX-1){
        rear=0;
        dqueue_arr[rear]=data;
    }
    else{
        rear++;
        dqueue_arr[rear]=data;
    }
}

void Get_Front(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Front Element of Queue is "<<dqueue_arr[front]<<endl;
    }
}

void Get_Back(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Last Element is "<<dqueue_arr[rear]<<endl;
    }
}

void Dqueuefront(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Underflow"<<endl;
    }
    else if(front==rear){
        cout<<"Dqueue Element is "<<dqueue_arr[front]<<endl;
        front=rear=-1;
    }
    else if(front==MAX-1){
        cout<<"Dqueued Element is "<<dqueue_arr[front]<<endl;
        front=0;
    }
    else{
        cout<<"Dqueued Element is "<<dqueue_arr[front]<<endl;
        front++;
    }
}

void Dqueuerear(){
    if(front==-1 && rear==-1){
        cout<<"Queue Overflow "<<endl;
    }
    else if(front==rear){
        cout<<"Dqueued Element is "<<dqueue_arr[rear]<<endl;
        front=rear=-1;
    }
    else if(rear==0){
        cout<<"Dqueue Element is "<<dqueue_arr[rear]<<endl;
        rear=MAX-1;
    }
    else{
        cout<<"Dqueue Element is "<<dqueue_arr[rear]<<endl;
        rear--;
    }
}

void Display(){
    if(front==-1 && rear==-1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        int i=front;
        while(i!=rear){
            cout<<dqueue_arr[i]<<"  ";
            i=(i+1)%MAX;
        }
        cout<<dqueue_arr[rear]<<endl;
    }
}


int main()
{
    Enqueuefront(2);
    Enqueuefront(5);
    Enqueuerear(-1);
    Enqueuerear(0);
    Enqueuefront(7);
    Enqueuefront(4);
    Display();
    Get_Back();
    Get_Front();
    Dqueuefront();
    Dqueuerear();
    Dqueuefront();
    Display();
    return 0;
}
