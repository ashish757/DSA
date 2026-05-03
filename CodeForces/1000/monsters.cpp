//
// Created by Ashish Raj Singh on 02/05/26.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin>>n>>k;



		vector<pair<int, int>> v(n);

		for (int i = 0; i < n; i++) {
			int a;
			cin>>a;
			a = (a % k == 0) ? k : a % k;
			v[i] = make_pair(i, a);
		}

		stable_sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
			return a.second > b.second;
		});

		for (int i = 0; i < n; i++) {
			cout<<v[i].first+1<<" ";
		}
		cout<<"\n";

	}
}