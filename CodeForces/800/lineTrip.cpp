//
// Created by Ashish Raj Singh on 19/12/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n>>x;

        vector<int> v(n);
        int maxGap = INT_MIN;
        int prev = 0;


        for (int i = 0; i < n; i++) {
            cin>>v[i];
            maxGap = max(maxGap, v[i] - prev);
            prev = v[i];
        }


        cout << max({maxGap, (x-v[n-1]) * 2}) << endl;

    }
}