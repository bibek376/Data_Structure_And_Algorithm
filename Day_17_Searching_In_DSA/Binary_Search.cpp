#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//For a Binary Search Element Should be Sorted

//Complexity of this program is O(logn)
bool Binary_Search(int Arr[],int key,int low,int high){
    int mid;
    mid=(low+high)/2;
    if(low<=high){
        if(key==Arr[mid]){
            return 1;
        }
        else if(key>Arr[mid]){
            return Binary_Search(Arr,key,mid+1,high);
        }
        else if(key<Arr[mid]){
            return Binary_Search(Arr,key,low,mid-1);
        }
    }
    return 0;
}

// //Using Iterative Approach
// bool Binary_Search(int Arr[],int key,int low,int high){
//     int mid;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(key==Arr[mid]){
//             return 1;
//         }
//         else if(key>Arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return 0;
// }


int main()
{
    int Arr[]={2,5,8,12,16,23,38,56,72,91};
    int size=sizeof(Arr)/sizeof(Arr[0])-1;

    if(Binary_Search(Arr,5,0,size)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}
