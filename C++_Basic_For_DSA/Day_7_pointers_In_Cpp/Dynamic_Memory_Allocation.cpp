#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int var1=10;
    int *ptr=&var1;
    *ptr=12;
    cout<<"Address of var1:"<<ptr<<endl;
    cout<<"Value Store by ptr:"<<*ptr<<endl;

    // Dynamic Memory Allocation
    // New Keyword

    // Syntax---> new data_type;
    int *p=NULL; //pointer Initialize with NULL value
    p=new int ; //Request memory for variable
    *p=19; //Store value at allocate address.
    cout<<"Value is :"<<*p<<endl;
    cout<<"Allocate address is:"<<p<<endl;
    delete p; //Free-up the memory
    cout<<*p<<endl;

    int *arr=new int[3];
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;

    // delete[] arr;
    cout<<"The value of arr[0] is :"<<arr[0]<<endl;

    float *pp=new float(4.5);
    cout<<"Float is "<<*pp<<endl;

    return 0;
}
