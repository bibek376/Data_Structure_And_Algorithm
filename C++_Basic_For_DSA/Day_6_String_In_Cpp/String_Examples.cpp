#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    // For this math header file is required but #include<bits/stdc++.h> is alternative
    cout<<sqrt(5)<<endl;
    string s1="Bibek";
    cout<<s1<<endl;
    // s1.size()
    // s1.length()
    // strlen(s1)
    cout<<"Length of s1 is:"<<s1.length()<<endl;

    string s2;
    // cin>>s2;
    // cout<<s2<<endl;
    // With the help of getline function we can print exactly same string including white spaces

    // getline(cin,s2);
    // cout<<"After using getline function:"<<s2<<endl;

    // Append and concatenate function
    string s3="Rawat";
    cout<<s1.append(s3)<<endl;
    // now s1=BibekRawat
    cout<<s1+s3<<endl;

    // Clear function
    s1.clear();
    cout<<"S1 is clear completaly:"<<s1<<endl;

    // Sorting
    cout<<"After sorting s3:"<<endl;
    sort(s3.begin(),s3.end());
    cout<<s3<<endl;

    // Compare
    // Both string are same so output will be 0
    string s4="abc";
    string s5="abc";
    // cout<<s5.compare(s4)<<endl;
    if(s5.compare(s4) ==0 ){
        cout<<"Both String are same:"<<endl;
    }
    else{
        cout<<"String are not same:"<<endl;
    }
    
    // Empty Function
    // Return 1 if empty otherwise return 0
    cout<<s1.empty()<<endl;

    // Erase function
    string s6="hello";
    // erase(1,2)--->starting from index 1 and delete 2 character
    s6.erase(1,2);
    cout<<"After erasing:"<<s6<<endl;

    // Search a sub string
    string s7="jhasfbmjgabclksa";
    cout<<s7.find("abc")<<endl;
    // Return 9 beacuse "abc" substring starting from 9th index

    // Insert a substring into a main string
    s7.insert(2,"xyz");
    cout<<"After insert xyz:"<<s7<<endl;

    // Copy a string
    char str1[50]="hello";
    char str2[50];
    strcpy(str2,str1);
    cout<<"str2 will be:"<<str2<<endl;

    // Substring
    // substr(6,4)---->6 is strating index and 4 is number of character
    cout<<"Sub string of s7:"<<s7.substr(6,4)<<endl;

    // Str to int
    int x;
    string s11="56";
    x=stoi(s11)+2;
    cout<<"Answer is:"<<x<<endl;

    // int to str
    string y;
    int s22=67;
    y=to_string(s22)+"22";
    cout<<"int to string is:"<<y<<endl;

    return 0;
}
