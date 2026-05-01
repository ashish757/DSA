//
// Created by Ashish Raj Singh on 01/05/26.
//

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while (t--) {
		int n;
		string s;
		cin>>s;
		n = s.length();

		int  o =0, z =0;

		for (int i = 0; i <n; i++) {
			if (s[i] == '1') o++;
			else z++;
		}
		if (o == z) {
			cout<<"0\n";
			continue;
		}

		int ans = 0;

		for (int i = 0; i <n; i++) {
			if (s[i] == '1') {
				if (z == 0) {
					ans = n - i;
					break;
				}
				z--;
			}else {
				if (o ==0) {
					ans = n - i;
					break;
				}
				 o--;
			}
		}

		cout<<ans<<"\n";
	}
}