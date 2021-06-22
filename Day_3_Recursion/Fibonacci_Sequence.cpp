// Fibonacci Sequence using iterative method
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int c;
     int n;
    cout<<"Enter How Long Sequence You Want ?";
    cin>>n;
    cout<<"Fibonacci sequence are:"<<a<<endl<<b<<endl;
    for(int i=2;i<n;i++){
    c=a+b;

    // Printing a value in range(1-20)
    if (c<=20){
        cout<<c<<endl;
    }
    a=b;
    b=c;
    }
    return 0;
}
