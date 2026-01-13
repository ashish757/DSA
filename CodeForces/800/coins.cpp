//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n % 2 == 0 || k % 2 == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}