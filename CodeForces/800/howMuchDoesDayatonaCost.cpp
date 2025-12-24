//
// Created by Ashish Raj Singh on 23/12/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        bool found = false;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            if (a == k) found = true;
        }
        if (found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}