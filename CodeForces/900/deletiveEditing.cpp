//
// Created by Ashish Raj Singh on 20/03/26.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string solve() {
	string s, tar;
	cin>>s;
	cin>>tar;
	vector<int> deleted(27, 0);
	int i = s.size()-1, t=tar.size()-1;

	while (i>=0 && t>= 0) {
		if (s[i] == tar[t]) {
			if (deleted[s[i]-'A'] > 0) {
				return "NO";
			}
			t--;
			i--;
		} else {
			deleted[s[i]-'A']++;
			i--;
		}
	}

	if (t<0) return "YES";
	return "NO";
}

int main() {
	int t;
	cin>>t;
	while (t--) {
		cout<<solve()<<"\n";
	}
}