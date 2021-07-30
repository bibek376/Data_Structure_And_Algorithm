#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Insertion Sort is Stable Sort
//Insertion Sort is Adaptive in nature(Benifits of Having a Sorted Array)
//Adaptive is Best Case Time Complexity-->O(n)


//Complexity of Insertion Sort is O(n*n)
void Insertion_Sort(int Arr[],int size){
    for(int i=1;i<size;i++){
        int temp=Arr[i];
        int j=i-1;
        while(j>=0 && Arr[j]>temp){
            Arr[j+1]=Arr[j];
            j--;
        }
        Arr[j+1]=temp;
    }
}


void Display(int Arr[],int size){
    for(int j=0; j<size;j++){
        cout<<Arr[j]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int Arr[]={7,3,8,2,67,34,9,3};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    cout<<"Before Insertion Sort"<<endl;
    Display(Arr,size);
    cout<<"After Insertion Sort "<<endl;
    Insertion_Sort(Arr,size);
    Display(Arr,size);
    return 0;
}
