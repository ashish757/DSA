//
// Created by Ashish Raj Singh on 18/01/26.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cout << i << (i == n ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}