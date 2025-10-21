//
// Created by Ashish Raj Singh on 21/10/25.
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
        int currPos = n;
        for(int i = 1; i <= n-1; i++) {
            currPos = i % 2 == 0 ? currPos + (n - i) : currPos - (n - i);
        }

        cout<<currPos<<endl;

    }

}
