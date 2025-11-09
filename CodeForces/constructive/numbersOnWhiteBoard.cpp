//
// Created by Ashish Raj Singh on 22/10/25.
//
// #include <iostream>
// #include <queue>
#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 1; i <= n; i++) v[i-1] = i;
        cout<<2<<endl;
        int i = n-1;
        while (i>0) {
            int avg = (v[i] + v[i-1] +1)/ 2;
            cout<<v[i]<<" "<<v[i-1]<<endl;
            v.pop_back();
            v.pop_back();
            v.push_back(avg);
            i--;
        }
    }
    return 0;
}
