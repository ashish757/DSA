//
// Created by Ashish Raj Singh on 09/05/26.
//

#include <iostream>
#include <climits>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		int  minNum = INT_MAX;
		long long sum = 0;
		int minus = 0;
		for (int i= 0; i<n;i++) {
			for (int j= 0; j<m;j++) {
				int a;
				cin >> a;
				if (a<0) minus++;
				sum += abs(a);
				minNum = min(minNum, abs(a));
			}
		}

		if (minus % 2 == 0) cout << sum << '\n';
		else cout << sum- 2*minNum << '\n';

	}
}