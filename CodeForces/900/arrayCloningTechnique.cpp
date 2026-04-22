//
// Created by Ashish Raj Singh on 20/04/26.
//
#include <iostream>
#include <climits>
#include <map>

using  namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		map<int, int> m;
		int maxFreq = INT_MIN;

		for(int i=0;i<n;i++) {
			int a;
			cin>>a;
			m[a]++;
			maxFreq = max(maxFreq, m[a]);
		}

		int ans = 0;
		while (maxFreq < n) {
			ans++;
			int remaining = n-maxFreq;

			if (remaining < maxFreq) {
				ans += remaining;
				break;
			}

				 ans += maxFreq;


			maxFreq *= 2;
		}

		cout<<ans<<"\n";
	}
}