//
// Created by Ashish Raj Singh on 10/07/25.
//
#include <iostream>
using namespace std;

void permutations(vector<int> nums, int i, vector<vector<int>> &result) {
    if (i == nums.size()) {
        result.push_back(nums);
        return;
    }

     for (int j = i; j < nums.size(); j++) {
         swap(nums[i], nums[j]);
         permutations(nums, i + 1, result);
         swap(nums[i], nums[j]);
     }

}

int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> result;
    permutations(nums, 0, result);

    for (auto & i : result) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}