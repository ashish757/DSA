//
// Created by Ashish Raj Singh on 01/05/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> v(n);

		for (int i = 0; i < n; i++) cin>>v[i];

		int a = 0;
		int arr[3];
		arr[0] = 0;
		bool flag = false;
		bool ans = false;
		for (int i =1; i < n; i++) {
			if (v[i] > v[a]) {
				arr[1] = i;
				a = i;
				flag = true;
			}
			else {
				if (flag) {
					arr[2]= i;
					ans = true;
					break;
				}
				a = i;
				arr[0]=i;
			}
		}

		if (!ans) cout<<"NO";
		else {
			cout<<"YES\n";
			for (int i : arr) {
				cout<<i+1<<" ";
			}
		}
		cout<<"\n";


	}
}