//
// Created by Ashish Raj Singh on 02/05/26.
//

#include <iostream>
#include <vector>
using namespace std;

long long getCount(int days, int minDays) {
	int n = days;
	int k = minDays;

	if (k > n) return 0;

	return  1LL * (n-k+1) * (n-k+2) / 2;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k, q;
		cin >> n >> k >> q;


		int consecutive = 0;
		long long ans = 0;

		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;

			if (a <= q) consecutive++;
			else if (consecutive != 0){
				ans += getCount(consecutive, k);
				consecutive = 0;
			}
		}

		if (consecutive != 0) ans += getCount(consecutive, k);


		cout<<ans<<"\n";
	}
}