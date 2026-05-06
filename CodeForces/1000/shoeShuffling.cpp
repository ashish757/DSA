//
// Created by Ashish Raj Singh on 04/05/26.
//
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		vector<int> v(n);
		map<int,int> mp;
		for (int i = 0; i < n; i++) {
			int a;
			cin>>a;
			v[i] =a;
			mp[a]++;
		}

		bool flag = false;
		for (auto k: mp) {
			if (k.second == 1) {
				cout<<-1<<"\n";
				flag = true;
				break;
			}
		}
		if (flag) continue;

		int st = 1;
		for (int i = 1; i < n; i++) {
			if (v[i] == v[i-1]) {
				cout<<i+1<<" ";

			} else {
				cout<<st<<" ";
				st = i+1;
			}
		}
		cout<<st<<"\n";

	}
}