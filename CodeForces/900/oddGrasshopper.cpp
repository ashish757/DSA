//
// Created by Ashish Raj Singh on 22/04/26.
//

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) {
		long long x, n;
		cin >> x >> n;
		bool evenPos = x%2==0;

		long long ans = 0;
		int rem = n % 4;

		if (rem == 0) {
			cout<<x<<"\n";
			continue;
		}
		if (rem == 1) {
			ans = (evenPos) ? ans = -1*n : ans = n;
		} else if (rem == 2) {
			ans = (evenPos) ? ans = 1 : ans = -1;
		} else {
			ans = (evenPos) ? ans = 1 + n : ans = -1 - n;

		}
		cout << x + ans << "\n";
	}

}