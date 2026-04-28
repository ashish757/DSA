//
// Created by Ashish Raj Singh on 28/04/26.
//

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<long long, long long> farthest(long long i, long long j,  long long n, long long m) {
	pair<long long, long long> a = {1, 1};
	pair<long long, long long> b = {n, 1};
	pair<long long, long long> c = {n, m};
	pair<long long, long long> d = {1, m};
	vector<pair<long long, long long> > v = {a, b, c, d};
	long long dist = 0;
	pair<long long, long long> ans;

	for (auto p : v ) {
		long long a = abs(p.first-i) + abs(p.second-j);
		if (dist <= a) {
			dist = a;
			ans = p;

		}
	}

	return ans;
}

int main() {
	std::ios::sync_with_stdio(false);
	std:cin.tie(nullptr);
	long long t;
	cin>>t;
	while(t--) {
		long long n, m, i ,j;
		cin>>n>>m>>i>>j;

		pair<long long, long long> a = farthest(i, j, n, m);
		pair<long long, long long> b = farthest(a.first, a.second, n, m);
		cout << a.first << " " << a.second << " " << b.first << " " << b.second << endl;

	}
}