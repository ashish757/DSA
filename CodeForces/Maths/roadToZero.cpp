//
// Created by Ashish Raj Singh on 17/12/25.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long x, y;
        long long a, b;
        cin >> x >> y >> a >> b;
        unsigned long long cost = 0;

        if (b<2*a) {
            long long combined = abs(min(x, y));
            cost+= combined*b + abs(x-y) * a;
        }
        else {
            cost+= a * (abs(x) + abs(y));

        }

        cout << cost << "\n";

    }
}