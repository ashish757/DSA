//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int bs = 0;
        int maxBS = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 0) bs++;
            else bs = 0;
            maxBS = max(maxBS, bs);
        }

            cout << maxBS << endl;
    }
}