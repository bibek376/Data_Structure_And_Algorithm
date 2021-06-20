#include<iostream>
using namespace std;

int main()
{
    // Array with giving size
    int arr[5]={4,5,4,6,7};
    cout<<arr[3]<<endl;
    // To calculate the total length of an array
    cout<<"length of array:"<<sizeof(arr)/sizeof(arr[0])<<endl;
    // Array without giving size
    int sum[]={3,5,6};
    cout<<sum[2]<<endl;
    // Array iteration using loop
    int arr1[4]={1,1,1,1};
    for(int i=0;i<4;i++){
        cout<<arr1[i]<<endl;
    }

    int arr2[6];
    cout<<"Enter The 6 numbers:"<<endl;
    for(int i=0;i<6;i++){
        cin>>arr2[i];
    }
    cout<<"our array is:"<<endl;
    for(int j=0;j<6;j++){
        cout<<arr2[j]<<"  ";
    }
    return 0;
}
