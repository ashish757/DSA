//
// Created by Ashish Raj Singh on 06/11/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

pair<int, int> maxEvenSumPair(vector<int>& v) {
    int n = v.size();

    if (n == 2) {
        pair<int, int> res = {v[1], v[0]};
        v.clear();
        return res;
    }

    int even1 = -1, even2 = -1;
    int odd1 = -1, odd2 = -1;

    for (int i = n - 1; i >= 0; --i) {
        if (v[i] % 2 == 0) {
            if (even1 == -1) even1 = v[i];
            else if (even2 == -1) { even2 = v[i]; break; }
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (v[i] % 2 != 0) {
            if (odd1 == -1) odd1 = v[i];
            else if (odd2 == -1) { odd2 = v[i]; break; }
        }
    }

    int evenSum = (even1 != -1 && even2 != -1) ? even1 + even2 : -1;
    int oddSum  = (odd1 != -1 && odd2 != -1) ? odd1 + odd2   : -1;

    if (evenSum == -1 && oddSum == -1)
        return {-1, -1};

    pair<int, int> res;
    if (evenSum >= oddSum)
        res = {even1, even2};
    else
        res = {odd1, odd2};

    // Remove both numbers from vector
    for (int val : {res.first, res.second}) {
        auto it = find(v.begin(), v.end(), val);
        if (it != v.end()) v.erase(it);
    }

    return res;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        for (int i = 1; i < n; i++) {
            pair<int, int> p = maxEvenSumPair(v);
            int avg = ceil(((double) p.first + (double) p.second )/ 2);
            v.push_back(avg);
            sort(v.begin(), v.end());
            cout<<p.first<<" "<<p.second<<endl;
        }


    }

    return 0;
}