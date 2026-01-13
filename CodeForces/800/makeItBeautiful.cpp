//
// Created by Ashish Raj Singh on 07/01/26.
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
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end() , greater<>());

        if (v[0] == v[n-1]) {
            cout<<"NO\n";
            continue;
        }

        if (n == 2) {
            cout<<"YES\n";
            cout<<v[0]<<" "<<v[1]<<"\n";
            continue;
        }


        cout<<"YES\n";
        for(int i=0; i<n-1; i++) {
            if (i == 1) {
                cout<<v[n-1]<<" "<<v[i]<<" ";
            } else  cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}