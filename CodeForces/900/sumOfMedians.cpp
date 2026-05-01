//
// Created by Ashish Raj Singh on 01/05/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin>>n>>k;
		vector<int> v(n*k);
		for (int i = 0; i < n*k; i++)	 cin>>v[i];

		long long ans = 0;

		int low =0, high = n*k-1;
		int left = (n+1)/2 - 1;
		int right = n - left;
		int j = 0;
		while (j < k) {
			low += left;
			high -= right;

			ans += v[high+1];
			j++;
		}

		cout<<ans<<"\n";

	}
}