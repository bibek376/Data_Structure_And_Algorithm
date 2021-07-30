#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//It is not Adaptive in nature
//It is not a Stable Sorting Algorithm
//Swaping is less in Selection Sort

//Complexity of Selection Sort is O(n*n)
void Selection_Sort(int *Arr,int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(Arr[min]>Arr[j]){
                min=j;
            }
        }
        swap(Arr[i],Arr[min]);
    }
}

//For Display the Elements
void Display(int *Arr,int size){
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int Arr[]={8,56,63,47,7};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    cout<<"Before Selection Sort "<<endl;
    Display(Arr,size);
    cout<<"After Selection Sort "<<endl;
    Selection_Sort(Arr,size);
    Display(Arr,size);
    return 0;
}
