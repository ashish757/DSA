//
// Created by Ashish Raj Singh on 14/01/26.
//

#include <iostream>
#include   <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq( 26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int oC =0;
        for (int const f: freq) {
            if (f % 2 != 0) oC++;
        }

        if (k-oC >= -1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}