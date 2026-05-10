//
// Created by Ashish Raj Singh on 10/05/26.
//

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		string tr = "";

		tr += s[0];


		for (int i = 1; i < n; i++) {
			unsigned long  len = tr.length();
			if (!tr.empty() && tr.back() == '(' && s[i] == ')') {
				tr.pop_back();
			} else {
				tr += s[i];
			}
		}

		cout << tr.length() / 2 << '\n';

		// int openBrackets = 0;
		// int moves = 0;
		//
		// for (int i = 0; i < n; i++) {
		// 	if (s[i] == '(') {
		// 		openBrackets++;
		// 	} else {
		// 		if (openBrackets > 0) {
		// 			openBrackets--;
		// 		} else {
		// 			moves++;
		// 		}
		// 	}
		// }
		// cout<<moves<<"\n";
	}
}
