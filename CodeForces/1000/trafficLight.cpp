//
// Created by Ashish Raj Singh on 03/05/26.
//

#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;

	while(t--) {
		int n;
		char p;
		cin>>n>>p;
		string s;
		cin>>s;

		s += s;

		if (p == 'g') {
			cout<<"0\n";
			continue;
		}

		int st = -1;
		int ans = 0;
		for (int i = 0; i < 2*n; i++) {
			if (st == -1 && s[i] == p) {
				st = i;
			}

			if (st != -1 && s[i] == 'g') {
				ans = max(ans, i - st);
				st = -1;
			}

		}

		cout<<ans<<"\n";
	}
}