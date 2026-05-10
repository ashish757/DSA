//
// Created by Ashish Raj Singh on 10/05/26.
//

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		int x, y, k;
		cin>>x>>y>>k;

		long long ans  = (1LL*k*(y+1) + x -3) / (x-1) + k;
		cout<<ans<<"\n";
	}
}