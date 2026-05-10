//
// Created by Ashish Raj Singh on 07/05/26.
//

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	cin.tie(nullptr);

	int t;
	cin>>t;
	while (t--) {
		int a, b;
		cin>>a>>b;

		int ans = 0;
		int count = a;

		// for (int i =0; i < a; i++) {
		// 	ans ^= i;
		// }
		if (a % 4 == 0) ans = 0;
		else if (a % 4 == 1) ans = a-1;
		else if (a % 4 == 2) ans = 1;
		else ans = a;


		if(ans == b) {
			cout<<count<<"\n";
			continue;
		}
		int num = ans ^ b;

		if (num == a) {
			count+=2;
		} else {
			count++;
		}

		cout<<count<<"\n";
	}
}