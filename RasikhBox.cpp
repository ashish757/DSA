//
// Created by Ashish Raj Singh on 31/10/25.
//

#include <iostream>
using namespace std;


void applyGravity(vector<vector<char>> &v, const int m, const int n) {
    vector<int> idx(m, 0);
    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (v[i][j] == '*') {
                idx[j]++;
                v[i][j] = '.';
            }
        }
    }

    for (int i = m-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (idx[j]>0) {
                idx[j]--;
                v[i][j] = '*';
            }
        }
    }
}

void rotateRight(vector<vector<char>> &v, const int m, const int n) {
    // Step 1: Transpose
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(v[i][j], v[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
    }
}

void rotateLeft(vector<vector<char>> &v, const int m, const int n) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(v[i][j], v[j][i]);
        }
    }

    // Step 2: Reverse each column
    for (int j = 0; j < n; j++) {
        for (int i = 0, k = n - 1; i < k; i++, k--) {
            swap(v[i][j], v[k][j]);
        }
    }
}

void printV(vector<vector<char>> &v) {
    for (vector<char> c : v) {
        for (const char c : c) cout << c << " ";
        cout << endl;
    }
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int m, n;
    cin >> m>> n;

    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int t;
    cin>>t;
    applyGravity(v, m, n);
    while (t--) {
        string s;
        cin>>s;
        if (s == "right") rotateRight(v, m, n);
        if (s == "left") rotateLeft(v, m, n);
        applyGravity(v, m, n);
    }

    printV(v);

    return 0;
}
