//
// Created by Ashish Raj Singh on 01/05/26.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int evens = 0;

		int reqAddition = INT_MAX;


		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			reqAddition = min(reqAddition, (a % k == 0)  ? 0 : k - (a % k));
			if (a % 2 == 0) evens++;
		}

		if (k == 4) {
			if (evens >= 2) cout<<"0\n";
			else if (evens == 1) cout<<min(1, reqAddition)<<"\n";
			else cout<<min(2, reqAddition)<<"\n";
			continue;
		}

		cout << reqAddition << '\n';

	}
}