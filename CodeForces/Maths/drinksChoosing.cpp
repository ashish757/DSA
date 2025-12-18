//
// Created by Ashish Raj Singh on 18/12/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(k + 1, 0);
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        c[f]++;
    }

    int happy = 0;
    int odd = 0;
    for (int i = 1; i <= k; i++) {
        happy += (c[i] / 2) * 2;
        odd += c[i] % 2;
    }

    happy += (odd + 1) / 2;

    cout << happy << endl;
}