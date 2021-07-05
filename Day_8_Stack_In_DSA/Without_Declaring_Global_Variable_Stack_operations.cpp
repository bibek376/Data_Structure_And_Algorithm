//Stack Operation Without Declaring Global Variable.
#include<iostream>
#include<bits/stdc++.h>
#define MAX 4
using namespace std;

int push(int top,int data,int stack_arr[MAX]){
    if(top==MAX-1){
        cout<<"Stack overflow"<<endl;
        exit(1);
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }
    return top;
}

int pop(int top,int stack_arr[MAX]){
    if(top==-1){
        cout<<"Stack underFlow"<<endl;
        exit(1);
    }
    else{
        cout<<"poped Element is:"<<stack_arr[top]<<endl;
        top=top-1;
    }
    return top;
}



void display(int stack_arr[MAX],int top){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
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
    int stack_arr[MAX];
    int top=-1;
    top=push(top,4,stack_arr);
    top=push(top,2,stack_arr);
    top=push(top,3,stack_arr);
    top=push(top,6,stack_arr);
    // top=push(top,6,stack_arr);
    display(stack_arr,top);
    top=pop(top,stack_arr);
    display(stack_arr,top);
    return 0;
}
