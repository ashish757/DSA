//
// Created by Ashish Raj Singh on 03/05/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

		int n, d;
		cin>>n>>d;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin>>v[i];

		sort(v.begin(), v.end());

		int low = 0, high = n-1;
		int ans = 0;
		while (low <= high) {
			int members = d/v[high] +1;
			if (high -low+ 1 >= members) ans++;

			low += members -1;
			high--;
		}

		cout<<ans<<"\n";
	}
