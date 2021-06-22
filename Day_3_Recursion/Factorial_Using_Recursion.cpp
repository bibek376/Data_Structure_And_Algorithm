// Factorial of a number using recursion function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int func1(int n){
    if(n>1){
        return n*func1(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int n;
    cout<<"Enter A Positive Number"<<endl;
    cin>>n;
    cout<<"Factorial is:"<<func1(n)<<endl;    
    return 0;
}
