#include<iostream>
#include<bits/stdc++.h>
#define MAX 5
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

int  char_matchs(char a, char b){
    if(a=='(' && b==')'){
        return 1;
    }
    else if(a=='[' && b==']'){
        return 1;
    }
    else if(a=='{' && b=='}'){
        return 1;
    }
    else{
        return 0;
    }
}

int  Parenthesis_Match(string s1){
    char match;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='{' || s1[i]=='[' || s1[i]=='('){
            push(s1[i]);
        }
        else if(s1[i]=='}' || s1[i]==')' || s1[i]==']'){
            if(isEmpty()){
                return 0;
            }
            match=pop();
            if(!char_matchs(match,s1[i])){
                return 0;
            }
        }
    }
    if(isEmpty()){
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
    string s1="{7-(3-2)+[8+(99-11)]}{}";
    if(Parenthesis_Match(s1)){
        cout<<"Match"<<endl;
    }
    else{
        cout<<"Not Match"<<endl;
    }
    return 0;
}
