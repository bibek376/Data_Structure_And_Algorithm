#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Insertion(int Arr[],int n){
    int temp;
    temp=Arr[n];
    int i=n;
    while(i>1 && temp>Arr[i/2]){
        Arr[i]=Arr[i/2];
        Arr[i/2]=temp;
        i=i/2;
    }
}

void Delete(int Arr[],int n){
    int i,j;
    swap(Arr[1],Arr[n]);
    i=1;
    j=2*i;
    while(j<n-1){
        if(Arr[j+1]>Arr[j]){
            j=j+1;
        }
        if(Arr[i]<Arr[j]){
            swap(Arr[i],Arr[j]);
            i=j;
            j=2*i;
        }
    }
}

int main()
{
    int Heap_Arr[]={0,10,20,30,25,5,40,35,23}; 

    for(int i=2;i<=8;i++){
        Insertion(Heap_Arr,i);
    }

    for(int i=1;i<=8;i++){
        cout<<Heap_Arr[i]<<"  ";
    }
    cout<<endl;

     //For Deleting tge Element
    for(int i=8;i>1;i--){
        Delete(Heap_Arr,i);
    }

    //Heap Sort
    cout<<"After Heap Sort"<<endl;
    for(int i=1;i<=8;i++){
        cout<<Heap_Arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
