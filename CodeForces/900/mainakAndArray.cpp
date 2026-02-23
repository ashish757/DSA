//
// Created by Ashish Raj Singh on 20/01/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        if (n == 1) {
            cout<<0<<endl;
            continue;
        }
        int ans = v[n-1]- v[0];

        for(int i=0;i<n-1;i++) {
            ans = max(ans, v[i]-v[i+1]);
        }
        for(int i=1;i<n;i++) {
            ans = max(ans, v[i] - v[0]);
        }
        for(int i=1;i<n-1;i++) {
            ans = max(ans, v[n-1] - v[i]);
        }

        cout<<ans<<endl;

    }
}
