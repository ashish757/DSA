//
// Created by Ashish Raj Singh on 05/12/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            vector<long long> a(n);
            vector<long long> b(n);

            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            for (int i = 0; i < n; ++i) {
                cin >> b[i];
            }

            long long currentMax = 0;
            long long currentMin = 0;

            for (int i = 0; i < n; ++i) {
                long long redMax = currentMax - a[i];
                long long redMin = currentMin - a[i];
                long long blueMax = b[i] - currentMin;
                long long blueMin = b[i] - currentMax;

                currentMax = max(redMax, blueMax);
                currentMin = min(redMin, blueMin);
            }

            cout << currentMax << "\n";
        }
    }
    return 0;
}