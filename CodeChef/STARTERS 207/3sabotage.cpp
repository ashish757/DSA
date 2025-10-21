//
// Created by Ashish Raj Singh on 21/10/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, x ,k;
        cin>>n>>x>>k;
        vector<int> v(n);
        int r = 1;
        for(int i =0; i< n; i++){
            cin>>v[i];
            if(v[i] >= x) r++;
        }

        sort(v.begin(), v.end(), greater<int>());
        v.resize(r-1);

        for(int i = 0; i < v.size(); i++) {

            if (v[i] > x && k != 0) {

                k--;
                x+=100;
                v[i] = 0;
                r--;

            } else if(v[i] <= x) {
                r--;
            }

        }

        cout<<r<<endl;
    }

}
