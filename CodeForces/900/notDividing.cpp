//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <vector>
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

            if (i ==0 ) {
                if (v[i] == 1) v[i]++;
                continue;
            }

            if (v[i] == 1) {
                v[i]++;
            }
            if (v[i] % v[i-1] == 0) {
                v[i]++;
            }

        }

        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;

    }
}