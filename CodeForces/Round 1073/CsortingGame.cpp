//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "Bob" << endl;
            continue;
        }


        int zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
        }

        vector<int> indices;

        for (int i = 0; i < zeros; ++i) {
            if (s[i] == '1') {
                indices.push_back(i + 1);
            }
        }

        for (int i = zeros; i < n; ++i) {
            if (s[i] == '0') {
                indices.push_back(i + 1);
            }
        }

        cout << "Alice" << endl;
        cout << indices.size()<<endl;
        for (int idx : indices) {
            cout <<idx<<" ";
        }
        cout << endl;
    }
}