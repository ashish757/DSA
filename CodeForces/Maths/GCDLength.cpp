//
// Created by Ashish Raj Singh on 18/12/25.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        string an = "1";
        for(int i = 1; i < a; i++) an += '0';

        string bn;
        for(int i = 0; i < b - c + 1; i++) bn += '1';
        for(int i = 0; i < c - 1; i++) bn += '0';

        cout << an<<" "<<bn<< endl;

    }
}