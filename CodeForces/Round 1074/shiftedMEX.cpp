//
// Created by Ashish Raj Singh on 18/01/26.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int mMEX = 0;
        int curr = 0;

        for (int i = 0; i < a.size(); i++) {
            if (i > 0 && a[i] == a[i - 1] + 1) {
                curr++;
            } else {
                curr = 1;
            }
            mMEX = max(mMEX, curr);
        }

        cout << mMEX << endl;
    }
    return 0;
}