//
// Created by Ashish Raj Singh on 27/09/25.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int N;
        cin >> N;
        int oddOnes = 0, evenOnes = 0;
        for (int i = 1; i <= N; ++i) {
            int a;
            cin >> a;
            if (i % 2 == 1) {
                if (a == 1) ++oddOnes;
            } else {
                if (a == 1) ++evenOnes;
            }
        }
        if (oddOnes == 0 || evenOnes == 0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;


}
