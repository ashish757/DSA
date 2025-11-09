#include<iostream>
using namespace std;

int matrixSearch(vector<int> nums, int k){
    int count = 0;
    int n = nums.size();
    vector<int> psum(n, 0);

    psum[0] = nums[0];
    for (int i =1; i < nums.size(); i++) {
        psum[i] = psum[i-1] + nums[i];
    }
    unordered_map<int, int> map;


   for (int i = 0; i < n; i++) {
       if (psum[i] == k) count++;


       int reqSum = psum[i] - k;
       if (map.find(reqSum) != map.end()) {
           count += map.at(reqSum);
       }

       map[psum[i]]++;
   }

    return count;
}


int main() {
    vector<int> nums = {1,2,1,2,1};
    cout<<matrixSearch(nums,3)<<endl;
    return 0;
}
