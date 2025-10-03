#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<int> v;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        v.push_back(digit);
    }

    // Handle digit transformation
    for (int i = v.size() - 1; i >= 0; i--) {
        if (i == v.size() - 1 && v[i] == 9) continue; // keep leading 9
        v[i] = min(v[i], 9 - v[i]);
    }

    // Rebuild number
    long long num = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        num = num * 10 + v[i];
    }

    cout << num << endl;
    return 0;
}
