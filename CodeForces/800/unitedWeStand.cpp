//
// Created by Ashish Raj Singh on 24/12/25.
//
#include <iostream>
#include <algorithm>
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
            cin >> a;
            v[i] = a;
        }

        int minc = 0;
        int minV = *min_element(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            if (v[i] == minV) {
                minc++;
            }
        }
        if (minc == n)   cout << -1 << endl;
        else {
            cout << minc <<" "<< n-minc<< endl;
            for (int i =0; i < minc; i++) {
                cout << minV << " ";
            }
            cout << endl;
            for (int i = 0; i < n; i++) {
                if (v[i] != minV) cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}