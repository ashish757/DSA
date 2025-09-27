//
// Created by Ashish Raj Singh on 16/07/25.
//
#include <iostream>
using namespace std;

int sum(vector<int> &v) {
    int sum = 0;
    for (auto x: v) {
        sum += x;
    }
    return sum;
}

void combinationSum(vector<int> &arr, int target, int i, vector<int> &sumArr, vector<vector<int>> &ans) {
    if (i >= arr.size()) {
        return;
    }
    sumArr.push_back(arr[i]);

    // if (sum(sumArr) > target) {
    // sumArr.pop_back();
    //
    //     combinationSum(arr, target, i+1, sumArr, ans);
    //     return;
    // }
    if (sum(sumArr) == target) {
        ans.push_back(sumArr);
        // return;
    }
    if (sum(sumArr) < target) {
        combinationSum(arr, target, i, sumArr, ans);
    }

    sumArr.pop_back();
    combinationSum(arr, target, i+1, sumArr, ans);
}

int main() {
    vector<int> arr = {2,3,5};
    vector<vector<int>> ans;
    int target = 8;
    vector<int> sumArr;

    combinationSum(arr, target, 0, sumArr, ans);

    for (auto & i: ans) {
        for (auto & j: i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}