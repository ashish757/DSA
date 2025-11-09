//
// Created by Ashish Raj Singh on 10/07/25.
//
#include <iostream>
using namespace std;

void subsets(vector<int> &arr, vector<int> &ans, int i) {
     if (i == arr.size()) {
         //print vector
         for (int num: ans) {
             cout << num << " ";
         }
         cout << endl;
         return;
     }
    ans.push_back(arr[i]);
    subsets(arr,ans,i+1);
    ans.pop_back();
    subsets(arr,ans,i+1);

}

int main() {
    vector<int> arr = {0};
    vector<int> ans;
    subsets(arr, ans, 0);
    return 0;
}