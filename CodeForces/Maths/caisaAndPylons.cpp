//
// Created by Ashish Raj Singh on 17/12/25.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        int m = INT_MIN;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            m = max(m, a);
        }

        cout << m << endl;

}