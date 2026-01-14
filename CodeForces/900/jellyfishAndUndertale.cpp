//
// Created by Ashish Raj Singh on 14/01/26.
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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);

        long long time = b;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            time += min(v[i], a-1);
        }

        cout << time << "\n";

    }
}