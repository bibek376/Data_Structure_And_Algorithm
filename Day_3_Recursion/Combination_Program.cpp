#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Com_Fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

// n--->Total Number Available
// r---->How many combination

int main()
{
    int n,r,result;
    cout<<"Enter the value of n and r:"<<endl;
    cin>>n>>r;

    result=Com_Fact(n)/Com_Fact(r)*Com_Fact(n-r);
    cout<<"Possible Combinations is:"<<result<<endl;

    return 0;
}
