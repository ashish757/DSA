//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int maxSub = 1;
        int count = 1;
        for (int i = 0; i < n-1; i++) {

            if (v[i+1] - v[i] <= k) {
                count++;
                maxSub = max(maxSub, count);
            } else {
                count = 1;
            }

        }

            cout << n-maxSub << endl;
    }
}