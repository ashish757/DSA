//
// Created by Ashish Raj Singh on 08/11/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, y, z;
        cin>>x>>y>>z;
        int mx = max({x, y, z});
        int cnt = (x == mx) + (y == mx) + (z == mx);

        if (cnt < 2) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        if (x == mx && y == mx)
            cout << mx << " " << z << " " << z << "\n";
        else if (x == mx && z == mx)
            cout << y << " " << y << " " << mx << "\n";
        else // (y == mx && z == mx)
            cout << x << " " << x << " " << mx << "\n";
    }
    return 0;
}