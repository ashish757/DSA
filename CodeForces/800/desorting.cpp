//
// Created by Ashish Raj Singh on 24/12/25.
//
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        int minD = INT_MAX;
        for(int i=0;i<n;i++) {
           cin>>v[i];
        }
        bool sorted = true;
        for(int i=0;i<n-1;i++) {
            int d = v[i+1] - v[i];
            if(d < 0) sorted = false;
            minD = min(minD, d);
        }

        if (!sorted) {
            cout<<0<<endl;
            continue;
        }

        cout<<minD / 2 + 1<<endl;
    }
}