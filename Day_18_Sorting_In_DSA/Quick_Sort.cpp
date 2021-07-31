#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Partation(int Arr[], int start, int end){
    int pivot = Arr[start];
    int Lower_Bound = start+1;
    int Upper_Bound = end; 
    while (Upper_Bound > Lower_Bound){
        while (Arr[Lower_Bound] <= pivot){
            Lower_Bound++;
        }
        while (Arr[Upper_Bound] > pivot){
            Upper_Bound--;
        }
        if (Upper_Bound > Lower_Bound){
            swap(Arr[Lower_Bound], Arr[Upper_Bound]);
        }
    }
    swap(Arr[start], Arr[Upper_Bound]);
    return Upper_Bound;
}


//Worst Case Time Complexity is O(n*n)
//Best Case Time Complexity is O(nlog(n))
void Quick_Sort(int Arr[], int LB, int UB){
    int position;
    if (LB < UB){
        position = Partation(Arr, LB, UB);
        Quick_Sort(Arr, LB, position - 1);
        Quick_Sort(Arr, position + 1, UB);
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
    int Arr[] = {5, 7, 3, 9, 1, 25};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    cout << "Before Quick Sort " << endl;
    Display(Arr, size);
    cout << "After Quick Sort " << endl;
    Quick_Sort(Arr, 0, size - 1);
    Display(Arr, size);
    return 0;
}
