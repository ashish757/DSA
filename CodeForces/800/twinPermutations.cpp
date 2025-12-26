//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            v[i] = n+1-a;
        }

        for (int i = 0; i < n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}