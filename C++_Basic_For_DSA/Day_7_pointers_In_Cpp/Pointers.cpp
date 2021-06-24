// Concept of pointer

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=2;
    int *b=&a;

    // Syntax
    // type *var_name;

    // &--->address operator or address at operator
    // *---->deferance or value of or value at operator

    cout<<"Address of a is:"<<b<<endl;
    cout<<"Address of a is:"<<&a<<endl;

    cout<<"Store value of b is:"<<*b<<endl;

    int **c=&b;

    cout<<"Address of b is:"<<c<<endl;
    cout<<"Address of b is:"<<&b<<endl;

    // It stores  the add. stored in a
    cout<<"value at *c is = add. of a:"<<*c<<endl;

    // It points to the value stored in a
    cout<<"Value store at **c is:"<<**c<<endl;

    return 0;
}
