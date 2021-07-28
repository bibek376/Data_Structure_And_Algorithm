#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Time Complexity For Binary Search is O(n)
bool Linear_Search(int Arr[],int key){
    int i=0;
    while(i<6){
        if(Arr[i]==key){
            return 1;
        }
        else{
            i=i+1;
        }
    }
    return 0;
}

int main()
{
    //Declaring int type of Array
    int Arr[]={6,8,3,9,5,2};

    //Searching Element is 5
    if(Linear_Search(Arr,5)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not Found"<<endl;
    }
    return 0;
}
