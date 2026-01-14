//
// Created by Ashish Raj Singh on 14/01/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        const long long sumS = k*(k+1);
        const long long sumB = n * (n+1) - (n-k)*(n-k+1);

        if (2*x >= sumS && 2*x <= sumB) cout << "YES\n";
        else cout << "NO\n";


    }
}