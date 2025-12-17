//
// Created by Ashish Raj Singh on 16/12/25.
//
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    auto mul = [](string s, int k) -> string {
        string res = "";
        while (k--) res += s;
        return res;
    };

    int tc;
    cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s >> t;
        int n = s.length(), m = t.length();
        int g = gcd(n, m);
        // int lcm_len = (n * m) / g;

        if (mul(s, m / g) == mul(t, n / g))
            cout << mul(s, m / g) << endl;
        else
            cout << "-1" << endl;
    }
}