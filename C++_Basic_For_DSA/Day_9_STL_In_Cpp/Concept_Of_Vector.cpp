//C++ STL vector concept

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> A={4,8,9,3,1};
    cout<<A[2]<<endl;
    //Traversing a vector
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<"  ";
    }
    cout<<endl;

    A.push_back(43);//For pushing the element
    A.pop_back();//For poping the element

    //Sort  
    sort(A.begin(),A.end());//O(nlog(n))-->Time complexity
    //After Sorting
     for(int i=0;i<A.size();i++){
        cout<<A[i]<<"  ";
    }
    cout<<endl;

   return 0;
}