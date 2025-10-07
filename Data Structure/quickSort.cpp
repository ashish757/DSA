//
// Created by Ashish Raj Singh on 19/07/25.
//
#include <iostream>
using namespace std;



int separateByPivot(vector<int> &arr, int s, int e) {
    int i = s-1,  pivot = arr[e];

        for (int j = i+1; j < e; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
    i++;
    swap(arr[i], arr[e]);
    return i;
}



void quickSort(vector<int> &arr, int s, int e) {
    if (s >= e) return;

    int pivotIndex = separateByPivot(arr, s, e);

    quickSort(arr, s, pivotIndex-1);

    quickSort(arr, pivotIndex+1, e);

}

int main() {
    vector<int> arr = {34,56,12,78,3,9,234,23};
    quickSort(arr, 0, arr.size()-1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}