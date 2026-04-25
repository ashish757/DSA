//
// Created by Ashish Raj Singh on 23/04/26.
//

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;

		int zero =0, one = 0;
		for(int i=0;i<n;i++) {
			int a;
			cin>>a;

			if (a == 0) zero++;
			else if (a == 1) one++;
		}

		if (one == 0) {
			cout<<"0\n";
			continue;
		}


		long long ans = one * 1LL<<(zero);
		cout<<ans<<"\n";
	}
}