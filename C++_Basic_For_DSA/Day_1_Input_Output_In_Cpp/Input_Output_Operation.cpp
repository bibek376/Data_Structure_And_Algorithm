// To demonstrate the use of cin and cout 
#include<iostream>
using namespace std;
int main()
{
    int num1;
    int fact=1;
    cout<<"Enter a number"<<endl;// "<<"Insertion or left_shift operator used to display the content.
    cin>>num1;// ">>"extraction or right_shift operator used to display the content.
    while(num1>0){
        fact=fact*num1;
        num1=num1-1;
    }
    // cout<<"value of num1 is:"<<num1<<endl;
    cout<<"Required Factorial is:"<<fact<<endl;
    return 0;
}
