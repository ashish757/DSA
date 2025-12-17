//
// Created by Ashish Raj Singh on 17/12/25.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin >> n >> m >> k;
        int each = n/k;

        int a1 = min(each, m);
        int a2 = (m-a1+k-2)/(k-1);
         cout << a1 - a2<< endl;

    }
}