//
// Created by Ashish Raj Singh on 23/04/26.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int diff(string s, string tar) {
	int n = s.length();
	int rem = 0;
	int r = n - 1;

	while (r >= 0 && s[r] != tar[1]) {
		r--;
		rem++;
	}

	if (r < 0) return 1e9;

	int l = r - 1;
	while (l >= 0 && s[l] != tar[0]) {
		l--;
		rem++;
	}

	if (l < 0) return 1e9;

	return rem;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;

		int rem00 = diff(s, "00");
		int rem25 = diff(s, "25");
		int rem50 = diff(s, "50");
		int rem75 = diff(s, "75");







		cout<<min({rem00, rem25, rem50,rem75})<<"\n";



	}
}