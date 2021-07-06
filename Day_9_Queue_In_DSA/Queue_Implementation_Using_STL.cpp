#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<"   ";
        q.pop();
    }
    cout<<endl;
}


int main()
{
    queue<int> myq;
    myq.push(43);
    myq.push(37);
    myq.push(13);
    myq.push(7);
    Display(myq);
    cout<<"Size of a Queue is "<<myq.size()<<endl;
    cout<<"Front Element is "<<myq.front()<<endl;
    cout<<"Last Element is "<<myq.back()<<endl;
    myq.pop();
    myq.pop();
    cout<<"After Deleting the Queue Element"<<endl;
    Display(myq);
    return 0;
}
