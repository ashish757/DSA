//
// Created by Ashish Raj Singh on 03/05/26.
//

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		long long n, k ,b, s;
		cin>>n>>k>>b>>s;
		if (b*k > s || b*k + n*(k-1) < s) {
			cout<<"-1\n";
			continue;
		}

		long long reqSum = s - k*b;
		long long firstAdd = min(reqSum, 1LL* k-1);
		long long firstNumber = k*b + firstAdd;
		reqSum =  reqSum - firstAdd;

		cout<<firstNumber<<" ";
		for (int i =1;i<n; i++) {
			if (reqSum > 0) {
				long long a = min(1LL* (k-1), reqSum);
				cout<<a<<" ";
				reqSum -= a;
			} else cout<<0<<" ";
		}
		cout<<"\n";



	}
}
