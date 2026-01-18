//
// Created by Ashish Raj Singh on 18/01/26.
//
#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while (t--) {

        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> original(n);
        vector<long long> current(n);

        for (int i = 0; i < n; ++i) {
            cin >> original[i];
            current[i] = original[i];
        }



        vector<int> modIdx;
        vector<bool> visited(n, false);

        for (int i = 0; i < m; ++i) {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (current[b] + c > h) {
                for (int idx : modIdx) {
                    current[idx] = original[idx];
                    visited[idx] = false;
                }
                modIdx.clear();

            } else {
                current[b] += c;

                if (!visited[b]) {
                    visited[b] = true;
                    modIdx.push_back(b);
                }

            }
        }

        for (int i = 0; i < n; ++i) {
            cout << current[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";

    }

}