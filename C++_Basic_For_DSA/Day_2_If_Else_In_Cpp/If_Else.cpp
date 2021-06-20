// Program for If else condition in C++
#include<iostream>
using namespace std;

int main()
{
    char name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    // If condition
    if(name == 'b'){
        cout<<"Hello i am Bibek:"<<endl;
    }
    // Else if condition for more case
    else if(name == 'c'){
        cout<<"Hello i am carlos:"<<endl;
    }
    else{
        cout<<"Sorry!"<<endl;
    }
    return 0;
}
