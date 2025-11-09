//
// Created by Ashish Raj Singh on 03/09/25.
//

#include <iostream>;
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int, int> map;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && nums2[i] > s.top()) {
                s.pop();
            }
            if (s.empty()) {
                map[nums2[i]] = -1;
            } else {
                map[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }

        for(int e: nums1) {
            ans.push_back(map[e]);
        }

        return ans;
    }
};