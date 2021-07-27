#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//If starting of array consider as index 1
//Root-->i/2
//Left Child--->2*i
//Right Child--->2*i+1

void Insert_In_Heap(int Arr[],int n){
    int temp,i=n;
    temp=Arr[i];
    while(i>1 && temp>Arr[i/2]){
        Arr[i]=Arr[i/2];
         Arr[i/2]=temp;
        i=i/2;
    }
}



int main()
{
    int Heap_Arr[]={0,40,35,15,30,10,12,6,5,20,50};
    //50,40,15,30,35,12,6,5,20,10

    for(int i=2;i<=10;i++){
        Insert_In_Heap(Heap_Arr,i);
    }

    for(int i=1;i<=10;i++){
        cout<<Heap_Arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
