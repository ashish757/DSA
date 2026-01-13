//
// Created by Ashish Raj Singh on 07/01/26.
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
        for(int i=0;i<n;i++) cin>>v[i];

        if (n == 1) {
            cout<<"0\n";
            continue;
        }

         int count = 0;
        for (int  i =1; i < n; i++) {
            int a =v[i-1] % 2;
            int b = v[i] % 2;
            if (a == b) count++;

        }

        cout<<count<<"\n";

    }
}
