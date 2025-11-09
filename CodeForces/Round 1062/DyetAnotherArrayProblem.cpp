#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    return a % b == 0 ? b : gcd(b, a % b);
}

// solved after contest with multiple hints
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) g = gcd(g, a[i]);

        long long x = 2;
        while (x <= 1000000000000000000LL && gcd(g, x) != 1) x++;

        if (x <= 1000000000000000000LL)
            cout << x << '\n';
        else
            cout << -1 << '\n';

    }

    return 0;
}
