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


void push(char data){
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
        char element;
        element=stack_arr[top];
        top=top-1;
        return element;
    }
}

void Parenthesis_Match(string s1){
    for(int i=0;i<s1.length();i++){
        if(s1[i] == '('){
            push('(');
            continue;
        }
        else if(s1[i]==')'){
            if(isEmpty()){
                cout<<"UnderFlow"<<endl;
                cout<<"Not Matching"<<endl;
                exit(1);
            }
            else{
                pop();
            }
        }
    }
    if(isEmpty()){
        cout<<"Matching"<<endl;
    }
    else{
        cout<<"Not Matching"<<endl;
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
    string s1="3*2-((8+1))";
    Parenthesis_Match(s1);
    return 0;
}
