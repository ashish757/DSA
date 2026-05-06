//
// Created by Ashish Raj Singh on 06/05/26.
//

#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);


	cin.tie(nullptr);

	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin>>n>>k;

		string s;
		cin>>s;

		int wCount = 0;

		for (int i =0; i<k; i++) {
			if (s[i] == 'W') wCount++;
		}

		int ans = wCount;

		for (int i = k; i<n; i++) {


			if (s[i] == 'W') wCount++;
			if (s[i-k] == 'W') wCount--;

			ans = min(ans, wCount);
		}


		cout<<ans<<"\n";

	}
}