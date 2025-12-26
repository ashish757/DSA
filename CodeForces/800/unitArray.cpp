//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s = 0, prod =  1;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            s+=a;
            prod*=a;
        }

        int ans = 0;
        if (s < 0) {
            ans = (abs(s) +1 )/2;
            for (int i =0; i < ans; i++) prod *= -1;
        }

        if (prod != 1) ans++;

        cout << ans << endl;
    }
}