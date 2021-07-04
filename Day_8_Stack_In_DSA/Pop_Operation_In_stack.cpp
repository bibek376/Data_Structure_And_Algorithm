#include<iostream>
#include<bits/stdc++.h>
#define MAX 4
using namespace std;

int stack_arr[MAX];
int top=-1;

void push(int data){
    if(top==MAX-1){
        cout<<"Stack Overflow"<<endl;
        exit(1);
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }
}

int pop(){
    if(top==-1){
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
        cout<<"Stack Underflow"<<endl;
        return;
    }
    else{
        for(int i=0;i<top+1;i++){
            cout<<stack_arr[i]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    push(56);
    push(43);
    push(7);
    push(9);
    // push(32);
    Display();
    cout<<"Pop Element is:"<<pop()<<endl;
    cout<<"Pop Element is:"<<pop()<<endl;
    cout<<"After pop"<<endl;
    Display();
    return 0;
}
