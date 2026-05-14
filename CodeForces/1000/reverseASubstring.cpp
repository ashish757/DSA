//
// Created by Ashish Raj Singh on 11/05/26.
//

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;

		string s;
		cin>>s;

		bool flag = true;
		for (int i = 1; i <n; i++) {
			if (s[i] < s[i-1]) {
				cout<<"YES\n";
				cout<<i<<" "<<i+1<<"\n";
				flag = false;
				break;
			}
		}

		if (flag) cout<<"NO\n";
	}
