//By Default Bubble sort is not Adaptive in nature
//We can make Bubble Sort as an Adaptive
//Adaptive--->Benefits of having a Sorted array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort_As_Adaptive(int Arr[], int size){
    int isSort=true;
    for (int j = 0; j < size - 1; j++){
        cout<<"pass "<<j+1<<endl;
        isSort=true;
        for (int i = 0; i < size - 1 - j; i++){
            if (Arr[i] > Arr[i + 1]){
                swap(Arr[i], Arr[i + 1]);
                isSort=false;
            }
        }
        if(isSort==true){
            return;
        }
    }
}

void Display(int Arr[], int size){
    for (int i = 0; i < size; i++){
        cout << Arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int Arr[] = {1, 2, 4, 6, 8, 9,40,57,99,305};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    cout << "Before Bubble Sorting " << endl;
    Display(Arr, size);
    cout << "After Bubble Sorting " << endl;
    Bubble_Sort_As_Adaptive(Arr, size);
    Display(Arr, size);
    return 0;
}
