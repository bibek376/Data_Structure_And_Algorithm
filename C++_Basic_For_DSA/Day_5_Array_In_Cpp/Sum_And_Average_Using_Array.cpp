// Program To Calculate a Sum and Average
#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,7,22,3,5};
    float sum=0;
    cout<<arr[4]<<endl;

    // Logic for calculating a sum
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        sum=sum+arr[i];
    }
    cout<<"Sum is :"<<sum<<endl;

    float avg;
    int count;

    // Logic for calculating a Average
    count=sizeof(arr)/sizeof(arr[0]);
    avg=sum/count;
    cout<<"Average is:"<<avg<<endl;

    return 0;
}
