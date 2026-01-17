//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalPairs = n / 2;

        vector<int> preO(n + 1, 0);
        vector<int> nextO(n, -1);

        for (int i = 0; i < n; ++i) {
            preO[i + 1] = preO[i] + (s[i] == '(');
        }

        int last = -1;
        for (int i = n - 1; i >= 0; --i) {
            nextO[i] = last;
            if (s[i] == '(') last = i;
        }

        int maxLen = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == ')') {
                int j = nextO[i];
                if (j != -1) {
                    int dist = j - i;
                    int Tpairs = totalPairs - dist;

                    if (Tpairs >= preO[i] + 1) {
                        maxLen = max(maxLen, 2 * Tpairs);
                    }
                }
            }
        }

        cout << maxLen << "\n";
    }
}