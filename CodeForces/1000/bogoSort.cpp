//
// Created by Ashish Raj Singh on 11/05/26.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];

		sort(v.begin(),v.end());

		for (int i = n-1; i >= 0; i--) {
			cout<<v[i]<<" ";
		}
		cout << "\n";
	}
}