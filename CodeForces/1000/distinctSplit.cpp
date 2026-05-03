//
// Created by Ashish Raj Singh on 02/05/26.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {

		int n;
		cin>>n;
		string s;
		cin>>s;

		vector<int> prefix(n);
		vector<int> suffix(n);

		set<char> se;

		for (int i = 0; i < n; i++) {
			se.insert(s[i]);
			prefix[i] = se.size();
		}
		se.clear();
		for (int i = n-1; i >=1; i--) {
			se.insert(s[i]);
			suffix[i] = se.size();
		}

		int ans = 0;
		for (int i = 0; i < n-1; i++) {
			ans = max(ans, prefix[i] + suffix[i+1]);
		}

		cout<<ans<<"\n";


	}
}