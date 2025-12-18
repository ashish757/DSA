//
// Created by Ashish Raj Singh on 18/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    int k;
    if (n % 2 == 0) k = n / 2;
    else k = (n + 1) / 2;

    cout << "1 " << k << endl;
    cout << n - 1;
    for (int i = 1; i <= n; i++) {
        if (i != k) cout << " " << i;
    }
    cout << endl;
}