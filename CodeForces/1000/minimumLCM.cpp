//
// Created by Ashish Raj Singh on 02/05/26.
//

#include <iostream>
using namespace std;

long long largestProperDivisor(long long n) {
	if (n <= 1) return 1;

	//  Scan odd numbers up to sqrt(N)
	for (long long i = 3; i * i <= n; i += 2) {
		if (n % i == 0) {
			// The VERY FIRST divisor we find is the smallest factor.
			// Therefore, n / i is the largest factor!
			return n / i;
		}
	}

	//  If the loop finishes without finding anything, N is a prime number.
	return 1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		if (n % 2 == 0) {
			cout<<n/2<<" "<<n/2<<"\n";
			continue;
		}

		long long maxDiv = largestProperDivisor(n);

		cout<<maxDiv<<" "<<n -maxDiv<<"\n";

	}
}