//
// Created by Ashish Raj Singh on 11/05/26.
//

#include <iostream>
using namespace std;

long long calc(long long n) {
	int res = 0;

	while (n>=8) {
		n = n/8;
		res++;
	}
	while (n>=4) {
		n = n/4;
		res++;
	}
	while (n>=2) {
		n = n/2;
		res++;
	}

	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--) {
		long long a,b;
		cin >> a >> b;

		long long ans = 0;
		if (a > b) {
			long long n = a/b;
			if (a %	b == 0 && (n & n-1) == 0) {
				ans = calc(n);
			} else {
				ans = -1;
			}
		} else if (a < b) {
			long long n = b/a;
			if (b %	 a == 0 && (n & n-1) == 0) {
				ans = calc(n);
			} else {
				ans = -1;
			}
		}

		cout<<ans<<"\n";
	}
}