#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    getline(cin,str1);
    int count=0;
    char search;
    cout<<"Enter a character ?"<<endl;
    cin>>search;
    for(int i=0;i<str1.length();i++){
        if (search==str1[i]){
            count=count+1;
        }
    }
    cout<<"Count of "<<search<<" is "<<count<<endl;

    return 0;
}
