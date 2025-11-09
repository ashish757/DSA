/*
 * Author: Ashish Raj Singh (ashishrajsingh75@gmail.com)
 * File Created: Sunday, 12th Oct 2025 12:24:31 pm
 * -----
 * Last Modified: Sunday, 12th Oct 2025 12:24:39 pm
 */

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int minP = 0;
    int currentP = 0;
    for (int i =0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        currentP += (b - a);
        minP = max(minP, currentP); 
    }

    cout<<minP<<"\n";

    return 0;
}