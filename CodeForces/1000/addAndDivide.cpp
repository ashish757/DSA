//
// Created by Ashish Raj Singh on 07/05/26.
//

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long a,b;
		cin>>a>>b;
		int ans= INT_MAX;
		int early =0;
		if (b>a) {
			cout<<"1\n";
			continue;
		}
		if (b == a) {
			cout<<"2\n";
			continue;
		}
		if (b == 1) {
			b++;
			early = 1;
		}

		for (int i = 0; i<30; i++) {
			int curr = early + i;
			long long temp =a;
			while (temp) {

				temp /= b;
				curr++;
			}
			ans = min(ans,curr);
			b++;
		}

		cout<<ans<<"\n";
	}
}