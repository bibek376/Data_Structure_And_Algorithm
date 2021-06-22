#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// n--->Number of Disk
// a--->source (position is fixed)
// b--->Auxiliary (position is fixed)
// c--->Destination (Position is fixed)
void Tower_Of_Hanoi(int n,char a,char b,char c){
    if(n>0){
        Tower_Of_Hanoi(n-1,a,c,b);
        cout<<a<<"--"<<c<<endl;
        Tower_Of_Hanoi(n-1,b,a,c);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of Disk:"<<endl;
    cin>>n;
    Tower_Of_Hanoi(n,'A','B','C');
    return 0;
}
