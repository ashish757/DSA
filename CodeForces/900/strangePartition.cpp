//
// Created by Ashish Raj Singh on 29/04/26.
//

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin>>t;
	while(t--) {
		long long n, x;
		cin>>n>>x;

		long long sum = 0;
		long long max = 0;

		for(int i=0;i<n;i++) {
			int a;

			cin>>a;
			max += (a + x -1) / x;
			sum+=a;

		}

		cout<<(sum+x-1)/x<<" "<<max<<"\n";

	}
}