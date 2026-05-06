//
// Created by Ashish Raj Singh on 04/05/26.
//
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		long long n, x;
		cin>>n>>x;

		int ans = 0;
		int a;
		cin>>a;
		long long l1 = a-x;
		long long u1 = a+x;

		for(int i=1;i<n;i++) {
			int b;
			cin>>b;

			long long l2 = b-x;
			long long u2 = b+x;

			long long lowerIntersection = max(l1, l2);
			long long upperIntersection = min(u1, u2);

			if (lowerIntersection > upperIntersection) {
				ans++;
				l1 = l2;
				u1 = u2;
			} else {
				l1 = lowerIntersection;
				u1 = upperIntersection;
			}
		}

		cout<<ans<<"\n";
	}
}