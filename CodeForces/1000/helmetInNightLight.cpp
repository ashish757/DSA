//
// Created by Ashish Raj Singh on 01/05/26.
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
		int n, p;

		cin>>n>>p;
		vector<pair<int, int> > v(n);
		for(int i=0; i<n; i++) {
			cin>>v[i].first;
		}
		for(int i=0; i<n; i++) {
			cin>>v[i].second;
		}

		sort(v.begin(), v.end(), [](auto a, auto b) {
			return a.second < b.second;
		});

		long long cost = p;
		int people = n-1;
		for(int i=0; i<n; i++) {
			if (people == 0) break;
			if (v[i].second >= p) {
				cost += 1LL * people * p;
				break;
			}

			// if (people >= v[i].first) {
			// 	people -= v[i].first;
			// 	cost += 1LL * v[i].first * v[i].second;
			// } else {
			// 	cost += 1LL * people * v[i].second;
			// 	people = 0;
			// }

			// better
			int informCount = min(people, v[i].first);
			cost += 1LL * informCount * v[i].second;
			people -= informCount;

		}


		cout<<cost<<"\n";


	}
}