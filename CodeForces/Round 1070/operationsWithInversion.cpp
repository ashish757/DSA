//
// Created by Ashish Raj Singh on 11/12/25.
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int d =0;
        for (int i = 0; i < n; i++) {
            if (v[i] == -1) continue;
            for (int j = i + 1; j < n; j++) {
                if (v[j] == -1) continue;
                if (v[i] > v[j]) {
                    d++;
                    // auto it = find(v.begin(), v.end(), v[j]);
                    // v.erase(v.begin() + j -d);

                    // j--;

                    v[j] = -1;
                }
            }
        }

        cout<<d<<endl;

    }
}
