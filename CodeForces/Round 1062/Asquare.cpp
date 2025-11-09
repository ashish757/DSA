//
// Created by Ashish Raj Singh on 28/10/25.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d) cout << "YES" << endl;
    else cout << "NO" << endl;
    }


    return 0;

}