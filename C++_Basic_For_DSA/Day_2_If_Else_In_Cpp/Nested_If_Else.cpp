// Program to demonstrate nested if condition
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    // Outer if condition
    if (num >0){
        // Inner if condition
        if( (num%2) == 0){
            cout<<"Even number:"<<endl;
        }
        // Inner else condition
        else{
            cout<<"Odd number:"<<endl;
        }
    }
    // Outer else condition
    else{
        cout<<"Negative number:"<<endl;
    }
    return 0;
}
