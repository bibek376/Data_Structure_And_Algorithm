// Program for switch case 
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num;
    cout<<"Enter the Two number:"<<endl;
    cin>>num1>>num2;
    cout<<"press 1 for sum:"<<endl;
    cout<<"press 2 for sub:"<<endl;
    cout<<"press 3 for mul:"<<endl;
    cout<<"What do you want to do ?"<<endl;
    cin>>num;
    switch (num)
    {
    case 1:
    cout<<"Sum is:"<<num1+num2<<endl;
        break;
        // Break Optional
    case 2:
    cout<<"Sub is:"<<num1-num2<<endl;
        break;
    case 3:
    cout<<"Mul is:"<<num1*num2<<endl;
        break;
// Default is optional
    default:
    cout<<"Thank you:"<<endl;
        break;
    }
    return 0;
}
