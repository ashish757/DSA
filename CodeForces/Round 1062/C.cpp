//
// Created by Ashish Raj Singh on 28/10/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        bool canBeSorted = false;
        // 0 for even
        int lastParity = -1;
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            if (lastParity == -1) {
                lastParity = v[i] % 2;
            } else {
                if (lastParity != v[i] % 2) {
                    canBeSorted = true;
                    lastParity = v[i] % 2;
                }
            }

        }

        if (canBeSorted) {
            sort(v.begin(), v.end());
        }

        for (const int i : v) {
                cout<<i<<" ";
            }
        cout<<endl;

    }


    return 0;
}