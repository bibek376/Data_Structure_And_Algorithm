#include<iostream>
#include<bits/stdc++.h>
#define MAX 4
using namespace std;

//Declaring a Variable Globally
//int stack_arr[4];
int stack_arr[MAX];
int top=-1;

int Push(int data){
    if(top==MAX-1){
        cout<<"Stack Overflow"<<endl;
        exit(1);//It means Abnormal termination of program.
    }
    else{
         top=top+1;
        stack_arr[top]=data;
    }
    return top;
}

void Display(int top){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
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
    top=Push(43);
    top=Push(3);
    top=Push(7);
    top=Push(8);
    top=Push(67);
    Display(top);
    return 0;
}
