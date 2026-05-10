//
// Created by Ashish Raj Singh on 09/05/26.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


constexpr int MAX = 30000;
vector<int> primes;
vector<bool> isPrime(MAX+1, true);

void sieve() {
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i * i <= MAX; i++) {
		if (isPrime[i]) {
			for (int j =i*i; j <= MAX; j += i) {
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i <= MAX; i++) {
		if (isPrime[i]) {
			primes.push_back(i);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	sieve();

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		const int a = *lower_bound(primes.begin(), primes.end(), 1+n);
		const int b = *lower_bound(primes.begin(), primes.end(), a+n);

		cout<<1LL* a*b<<"\n";
	}
}