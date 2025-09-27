//
// Created by Ashish Raj Singh on 04/08/25.
//
 #include <iostream>
using namespace std;

// valid inversion
// i < j
// arr[i] > arr[j]
int countInversion(vector<int> &arr) {
    int n = arr.size();
    int count = 0;
     for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
             if (i < j && arr[i] > arr[j]) {
                count++;
             }
         }
     }
    return count;
}


int main() {
    vector<int> arr = {6,3,5,2,7};
    cout << countInversion(arr) << endl;
    return 0;
}