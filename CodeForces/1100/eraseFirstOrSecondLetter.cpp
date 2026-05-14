//
// Created by Ashish Raj Singh on 14/05/26.
//

#include <iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;

		set<char> st;
		int ans = 0;
		for(int i=0; i<n; i++) {
			st.insert(s[i]);
			ans += st.size();
		}

		cout<<ans<<endl;

	}
}