//
// Created by Ashish Raj Singh on 02/10/25.
//

#include <iostream>
using namespace std;

vector<int> reverse(vector<int> &v, int l, int h) {
    if (l >= h) return v;

    int t = v[l];
    v[l] = v[h];
    v[h] = t;

    return reverse(v, l + 1, h - 1);
}

void reverseInPlace(vector<int> &v, int l, int h) {
    if (l >= h) return;
    int t = v[l];
    v[l] = v[h];
    v[h] = t;

    return reverseInPlace(v, l + 1, h - 1);
}

int main() {
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    // vector<int> r = reverse(v, 0, n-1);
    // reverseInPlace(v, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}