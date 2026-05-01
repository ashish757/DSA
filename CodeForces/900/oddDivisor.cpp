//
// Created by Ashish Raj Singh on 29/04/26.
//
#include <iostream>

using namespace std;


int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {

		long long n;
		cin>>n;
		if ((n & (n-1)) == 0 || n == 1) cout<<"no\n";
		else cout<<"yes\n";
	}
}