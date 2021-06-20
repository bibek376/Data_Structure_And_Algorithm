#include<iostream>
using namespace std;
// Function to calculate the factorial of a number:
// X is a Formal parameters
int func1(int x){
    int fact=1;
    for(int i=1;i<x+1;i++){
        fact=fact*i;
    }
    return fact;
}
// Function Prototype
string  table(int y);

int main()
{
    // Actual parameters
    int num1,num2; 
    cout<<"Enter the number:"<<endl;
    cin>>num1;
    cout<<"Enter the number for Table:"<<endl;
    cin>>num2;
    // func1 calling 
    cout<<"Table of "<<num2<<" is"<<endl<<table(num2)<<endl;
    // func1 calling   
    cout<<"Factorial is:"<<func1(num1)<<endl;
    return 0;
}
// Y is a Formal parameters
string  table(int y){
    for(int i=1;i<11;i++){
        cout<<y<<"X"<<i<<"="<<y*i<<endl;
    }
    return "Thank You!";
}