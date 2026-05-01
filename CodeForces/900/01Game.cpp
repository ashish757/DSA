//
// Created by Ashish Raj Singh on 01/05/26.
//

#include <iostream>



#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		int n = s.length();

		int z=0, o=0;

		for (int i = 0; i < n; i++) {
			if (s[i] == '0') z++;
			else o++;
		}

		if (min(o,z) % 2 == 1) cout<<"DA\n";
		else cout<<"NET\n";
	}
}