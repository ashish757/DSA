//
// Created by Ashish Raj Singh on 01/05/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<pair<int, int>> pairs(n, {INT_MAX, INT_MAX});

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			for (int j = 0; j < x; j++) {
				int a;
				cin >> a;

				if (a < pairs[i].first) {
					pairs[i].second = pairs[i].first;
					pairs[i].first = a;
				} else if (a < pairs[i].second) {
					pairs[i].second = a;
				}
			}
		}



		long long ans = 0;
		for (int i = 0; i < n; i++) {
			ans += pairs[i].second;
		}

		int secMin = pairs[0].second, absMin =  pairs[0].first;
		for (int i = 1; i < n; i++) {
			secMin = min(secMin, pairs[i].second);
			absMin = min(absMin, pairs[i].first);
		}
		ans += absMin - secMin;

		cout << ans << "\n";
	}
}
