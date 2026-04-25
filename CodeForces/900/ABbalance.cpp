//
// Created by Ashish Raj Singh on 23/04/26.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		int n = s.length();

		if (s[0] == s[n-1]) cout<<s<<"\n";
		else {
			s[0] = s[n-1];
			cout<<s<<"\n";
		}

	}
}