//
// Created by Ashish Raj Singh on 14/05/26.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];

		long long ans = a[0] + b[0] * (k-1);
		int maxExp = b[0];
		long long mExp = a[0];

		for(int i=1;i<k;i++) {
			if(i >= n) break;
			mExp += a[i];

			long long curr = 0;

			maxExp = max(maxExp, b[i]);

			curr = maxExp * (k-i-1) + mExp;
			ans = max(ans, curr);

		}

		cout<<ans<<"\n";
	}
}