#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int Arr[], int size){
    for (int j = 0; j < size-1;j++){
        for (int i = 0; i < size-j-1;i++){  
            if (Arr[i] > Arr[i+1]){
                swap(Arr[i], Arr[i+1]);
            }
        }
    }
}


void Display(int Arr[],int n){
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<"  ";
    }
}

int main()
{
    int Arr[] = {5, 9, 3, 2, 4};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    cout<<"Before Sorting "<<endl;
    Display(Arr,size);
    cout<<endl;
    Bubble_Sort(Arr, size);
    cout<<"After Sorting "<<endl;
    Display(Arr,size);
    cout<<endl;
    return 0;
}
