//
// Created by Ashish Raj Singh on 17/07/25.
//
#include <iostream>
using namespace std;

void merge(vector<int> &arr, int s, int m, int e) {
    if (s==m && m ==e) return;

    int i = s, j = m+1;
    vector<int> temp;
    while (i<=m && j<=e) {
        if (arr[i]<=arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i<= m) {
        temp.push_back(arr[i++]);
    }
    while (j<=e) {
        temp.push_back(arr[j++]);
    }

    i = 0;
    while (i<temp.size()) {
        arr[s+i] = temp[i];
        i++;
    }
}

void mergeSort(vector<int> &arr, int s, int e) {
    if (s>=e) return;

    int mid = s + (e-s)/2 ;

    //left
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid+1, e);

    merge(arr, s, mid, e);
}

int main() {
    vector<int> arr = {4,42,9,12,90,3,5,28};
    mergeSort(arr, 0, arr.size()-1);

    for (auto &i : arr) {
        cout << i << " ";
    }
    return 0;
}