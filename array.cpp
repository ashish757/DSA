//
// Created by Ashish on 22-05-2025.
//
#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i=0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArr(int arr[], const int size)
{
    int start = 0, end = size-1;
    for (int i =0; i<size; i++)
    {
        if (start >= end) return;
        swap(arr[start], arr[end]);
        // start++;
        end--;

    }
}

int main()
{

    // int arr[] = {23,45,57,23,98, 67};
    // constexpr int size = (sizeof(arr) / sizeof(int));
    // printArr(arr, size);
    // reverseArr(arr, size);
    // printArr(arr, size);

    vector<int> vec = {13,3};

    // cout<<vec[0];
    for (int e:  vec)
    {
        cout<<e<<endl;
    }

    return 0;
}