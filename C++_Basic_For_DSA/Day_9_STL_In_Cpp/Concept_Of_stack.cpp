//C++ STL stack concept
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Display(stack<int> stack_arr){
    while( !stack_arr.empty() ){
        cout<<stack_arr.top()<<"  ";
        stack_arr.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> stack_arr;
    //push is used for push the element on the stack
    stack_arr.push(7);
    stack_arr.push(34);
    stack_arr.push(43);
    stack_arr.push(32);
    //Size of current stack
    cout<<"Size of stack is :"<<stack_arr.size()<<endl;
    cout<<"Stack Elements are:"<<endl;
    Display(stack_arr);
    //Deleting a stack top element.
    stack_arr.pop();
    stack_arr.pop();
    cout<<"After Poping the Elemnts Stack Will be"<<endl;
    Display(stack_arr);
    cout<<"Stack Top element is:"<<stack_arr.top()<<endl;

   return 0;
}