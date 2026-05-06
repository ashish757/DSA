//
// Created by Ashish Raj Singh on 06/05/26.
//

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {

		int n, r, b;
		cin>>n>>r>>b;

		int base = r/ (b+1);

		int rem = r%(b+1);

		for (int i = 0; i<b+1; i++) {
			if (i != 0) cout<<"B";

			// for (int j =0; j < base; j++) {
			// 	cout<<"R";
			// }
			// if (rem > 0) {
			// 	cout<<"R";
			// 	rem--;
			// }

			int total = base + (rem > 0 ? 1 : 0);

			if (rem >0) rem--;
			cout<<string(total, 'R');
		}

		cout<<"\n";
	}
}
