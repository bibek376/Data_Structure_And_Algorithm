#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Insert(int Arr[],int n){
    int temp;
    int i=n;
    temp=Arr[n];
    while(i>1 && temp>Arr[i/2]){
        Arr[i]=Arr[i/2];
        Arr[i/2]=temp;
        i=i/2;
    }
}

void Delete_From_Root(int Arr[],int n){
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
    //40  25  35  10  5  20  30 

    //For Inserting a Element
    for(int i=2;i<=7;i++){
        Insert(Heap_Arr,i);
    }

     //For Display the Element
    for(int i=1;i<=7;i++){
        cout<<Heap_Arr[i]<<"  ";
    }
    cout<<endl;

    //For Deleting The Element
    Delete_From_Root(Heap_Arr,7);// 7 is last index

    //After Delete the Heap Data
    //In Heap we can only Delete the root 
    cout<<"After Deleting "<<endl;
    for(int i=1;i<=7;i++){
        cout<<Heap_Arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}
