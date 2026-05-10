//
// Created by Ashish Raj Singh on 10/05/26.
//

#include <iostream>
using namespace std;

bool check(long long n) {
	long long temp = n;
	while (temp) {
		long long d = temp % 10;
		if (d != 0 && n % d != 0) return false;
		temp = temp / 10;
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;

		while (!check(n)) {
			n++;
		}

		cout<<n<<"\n";

	}
}