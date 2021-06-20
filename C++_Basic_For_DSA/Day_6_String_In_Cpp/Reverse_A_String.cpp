#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    // Get inline function takes a sentences as a string
    getline(cin,s1);
    cout<<"Before Reverse a string: "<<s1<<endl;

    string str="";
    for(int i=s1.length()-1;i>=0;i--){
        str=str+s1[i];
    }
    cout<<"After reversing a string:"<<str<<endl;
    return 0;
}
