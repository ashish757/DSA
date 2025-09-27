//
// Created by Ashish on 25-05-2025.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr)
{
    for (int i=0; i<arr.size(); i++)
    {
        for (int j = 0; j<arr.size()-i-1; j++)
        {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j+1]);
        }
    }
    return arr;
}

vector<int> selectionSort(vector<int> arr)
{
    for (int i=0; i<arr.size(); i++)
    {
        int smallest = INT_MAX;
        int smallestIndex = 0;
        for (int j=i; j<arr.size();j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);

    }

    return arr;

}



int main()
{
    vector<int> arr = {124,36,5, 8, -5,854,2,3, 0, -3};

    vector<int> bubble = bubbleSort(arr);
    for (int i : bubble) cout<<i<<" ";
    cout<<endl;
    vector<int> selection = selectionSort(arr);
    for (int i : selection) cout<<i<<" ";


    return 0;
}