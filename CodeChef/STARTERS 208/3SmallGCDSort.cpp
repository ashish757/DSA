//
// Created by Ashish Raj Singh on 23/10/25.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<int , int>> v;


        for(int i = 1; i <= n; i++) {
            int s = gcd(i, n);
            v.push_back({i, s});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
           if (a.second == b.second)
               return a.first < b.first;
           return a.second > b.second;    // higher score first
       });

        for(auto a: v) cout<<a.first<<" ";
        cout<<endl;

    }

}
