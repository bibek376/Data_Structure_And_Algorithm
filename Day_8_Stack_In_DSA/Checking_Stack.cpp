#include<iostream>
#include<bits/stdc++.h>
#define MAX 4
using namespace std;

int stack_arr[MAX];
int top=-1;

int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}


void push(int data){
    if(isFull()){
        cout<<"stack overflow"<<endl;
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }
}

int pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    else{
        int element;
        element=stack_arr[top];
        top=top-1;
        return element;
    }
}


void Display(){
    if(top==-1){
        cout<<"Stack Is Empty:"<<endl;
    }else{
        for(int i=0;i<top+1;i++){
            cout<<stack_arr[i]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    push(5);
    push(7);
    push(9);
    push(3);
    // push(1);
    Display();
    cout<<"poped Element is:"<<pop()<<endl;
    Display();
    push(1);
    cout<<isFull()<<endl;//return 1 if full else 0
    cout<<isEmpty()<<endl;//return 1 if empty else 0
    return 0;
}
