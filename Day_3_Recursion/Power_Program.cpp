#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power_Func(int b ,int p){
    if (p==0){
        return 1;
    }
    else{
        return Power_Func(b,p-1)*b;
    }
}

int main()
{
    int base,exp;
    cout<<"Enter a Base and Exp:"<<endl;
    cin>>base>>exp;
    cout<<"Power of ("<<base<<","<<exp<<")"<<"is"<<endl<<Power_Func(base,exp)<<endl;
    return 0;
}
