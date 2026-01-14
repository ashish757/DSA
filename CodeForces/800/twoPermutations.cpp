//
// Created by Ashish Raj Singh on 13/01/26.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == a && a == b) {
            cout << "YES" << endl;
            continue;
        }

        if (a+b >= n || n - a - b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}