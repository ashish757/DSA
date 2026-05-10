//
// Created by Ashish Raj Singh on 07/05/26.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		vector<pair<int, int>> v(n);
		for(int i=0;i<n;i++) {
			int a;
			cin>>a;
			v[i] = make_pair(a, i);
		}

		sort(v.rbegin(),v.rend());

		int left = 0;
		int right = 2;
		long long walks = 0;
		for (int i= 0; i < n; i++) {
			if (i%2==0) {
				walks += 1LL * 2 * (1-left) * v[i].first;
				v[i].first = left--;

			}
			else {
				walks += 1LL * 2 * (right-1) * v[i].first;
				v[i].first = right++;
			}
		}

		sort(v.begin(),v.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
			return p1.second < p2.second;
		});

		cout<<walks<<"\n";
		cout<<1<<" ";
		for (int i = 0; i < n; i++) {
			cout<<v[i].first<<" ";
		}
		cout<<"\n";

	}
}