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
		int n;
		cin>>n;

		int highest_bit_index = 31 - __builtin_clz(n-1);

		int p = 1 << highest_bit_index;

		for (int i = p-1; i >= 0; i--) {
			cout<<i<<" ";
		}
		for (int i = p; i < n; i++) {
			cout<<i<<" ";
		}
		cout<<"\n";

	}
}