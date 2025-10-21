//
// Created by Ashish Raj Singh on 21/10/25.
//

// TLE

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int maxA = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            maxA = max(maxA, A[i]);
        }

        // Sort descending (optional for easier handling)
        sort(A.rbegin(), A.rend());

        int answer = 5; // as guaranteed by problem

        // Try Z from maxA-1 down to 5
        for (int Z = maxA - 1; Z >= 5; Z--) {
            vector<int> notDivisible;
            for (int x : A) {
                if (x % Z != 0) {
                    notDivisible.push_back(x);
                    if (notDivisible.size() >= 2) break; // only need 2 elements
                }
            }

            if (notDivisible.size() >= 2) {
                // check condition Z ≤ X or Z ≤ Y is always true since Z ≤ max element
                answer = Z;
                break;
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
