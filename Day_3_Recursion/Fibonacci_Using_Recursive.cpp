#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci_recursive(int num);
int Next_Fibonacci(int next);

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Fib("<<n<<")"<<endl<<fibonacci_recursive(n)<<endl;

    int num2;
    cout<<"Enter a Fiobonacci Number:"<<endl;
    cin>>num2;
    cout<<"Next Fibonacci number after "<<num2<<" is:"<<endl<<Next_Fibonacci(num2)<<endl;
    return 0;
}

// Fibonacci number of a certain position
int fibonacci_recursive(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return fibonacci_recursive(num-1)+fibonacci_recursive(num-2);
    }
}

// Next Fibonacci Number
int Next_Fibonacci(int next){
    double result;
    result=next*(1+sqrt(5))/2;

    return round(result);

}
