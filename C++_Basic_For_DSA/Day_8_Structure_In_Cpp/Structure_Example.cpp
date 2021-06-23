#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Structure-->It is a user define data type here we can store different data type

struct employee{
    int id;
    float salary;
    string country;
};

// typedef struct employee{
//     int id;
//     float salary;
//     string country;
// } emp;

// Here emp is the short form of struct employee

union money{
    int mobile; //4 byte
    char c1; //1 byte
    double gold; //4 byte
};
// With the help of union we can manage the memory we can have only 4-bytes available at a time

int main()
{
    // emp bibek;
    struct employee bibek;
    bibek.id=6728;
    bibek.salary=100000;
    bibek.country="Nepal";

    cout<<bibek.id<<endl;
    cout<<bibek.salary<<endl;
    cout<<bibek.country<<endl;

    // for union 
    union money m1;
    m1.mobile=4;
    m1.c1='b'; //It is working 
    cout<<m1.mobile<<endl; //That's why m1.mobile shows us garbage value..

    enum Time{Morning,Afternoon,Night};
    cout<<"For Enum"<<endl;
    cout<<Afternoon<<endl;

    Time T1=Night;
    cout<<"For Night"<<endl<<T1<<endl;

    return 0;
}
