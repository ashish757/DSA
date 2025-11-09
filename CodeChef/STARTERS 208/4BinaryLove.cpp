//
// Created by Ashish Raj Singh on 23/10/25.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n <= 1) {
            cout << "Bob" << endl;
            continue;
        }

        int groups = 1;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                groups++;
            }
        }

        if (groups <= 2) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}