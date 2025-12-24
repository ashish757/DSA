#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        if (n <= 2) {
            cout << 0 << endl;
            continue;
        }

        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += abs(v[i] - v[i+1]);
        }

        long long maxR = 0;
        for (int i = 0; i < n; i++) {
            long long re = 0;
            if (i == 0) {
                re = abs(v[0] - v[1]);
            } else if (i == n - 1) {
                re = abs(v[n-2] - v[n-1]);
            } else {
                re = abs(v[i-1] - v[i]) + abs(v[i] - v[i+1]) - abs(v[i-1] - v[i+1]);
            }
            maxR = max(maxR, re);
        }

        cout<<sum -maxR<<endl;
    }
    return 0;
}