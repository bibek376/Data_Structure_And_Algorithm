#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Merge(int A[],int low,int high,int mid){
    int i,j,k;
    int B[high+1];
    i=low;
    j=mid+1;
    k=low;
    //For comparing i and j
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    //For Copy the only i
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    //For Copy the only j
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;
    }
    //Copying the Element From Array B to Array A
    for(i=low;i<=high;i++){
        A[i]=B[i];
    }
}


void Merge_Sort(int *A,int LB,int UB){
    int mid;
    if(LB<UB){
        mid=(LB+UB)/2;
        Merge_Sort(A,LB,mid);
        Merge_Sort(A,mid+1,UB);
        Merge(A,LB,UB,mid);
    }
}


void Display(int *A,int size){
    for(int i=0;i<size;i++){
        cout<<A[i]<<"  ";
    }
    cout<<endl;
}


int main()
{
    int A[]={5,7,3,5,7,2,3,7};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"Before Merge Sort"<<endl;
    Display(A,size);
    Merge_Sort(A,0,size-1);
    cout<<"After Merge Sort"<<endl;
    Display(A,size);
    return 0;
}
