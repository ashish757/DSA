//
// Created by Ashish Raj Singh on 07/01/26.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int xo = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            xo = xo ^ a;
        }
        if (n % 2 == 0 && xo == 0) cout <<0<< endl;
        else if (n%2 != 0) cout <<xo<< endl;
        else cout << -1<< endl;
    }
}