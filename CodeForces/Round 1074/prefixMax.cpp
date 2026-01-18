//
// Created by Ashish Raj Singh on 18/01/26.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxV = -1;
        for (int i = 1; i <= n; ++i) {
            int a;
            cin >> a;
            maxV = max(maxV, a);
        }
        cout << maxV * n << endl;
    }
}