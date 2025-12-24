//
// Created by Ashish Raj Singh on 19/12/25.
//
#include <iostream>
using namespace std;

// #define endl "\n";

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        int last;
        cin>>last;
        bool alreadySorted = true;
        for (int i = 0; i < n-1; i++) {
            int a;
            cin>>a;
            if (last > a) alreadySorted = false;
            last = a;
        }

        if (alreadySorted || k > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}