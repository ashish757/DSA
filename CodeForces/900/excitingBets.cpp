//
// Created by Ashish Raj Singh on 26/04/26.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--) {
		long long a, b;
		cin>>a>>b;
		long long diff = abs(a-b);

		if (diff ==0) {
			cout<<"0 0"<<"\n";
		} else {
			cout<<diff<<" ";
			long long rem = a % diff;
			cout<<min(rem, diff-rem)<<"\n";
		}



	}
}