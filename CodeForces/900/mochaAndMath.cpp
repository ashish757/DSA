//
// Created by Ashish Raj Singh on 25/04/26.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long long ans;
		cin>>ans;
		for(int i=1;i<n;i++) {
			int a;
			cin>>a;
			ans = ans & a;

		}

		cout<<ans<<"\n";
	}
}