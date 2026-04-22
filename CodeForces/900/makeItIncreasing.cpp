//
// Created by Ashish Raj Singh on 23/02/26.
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


		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		bool flag = true;

		int oper = 0;
		for (int i = n - 2; i >= 0; i--) {
			if (v[i + 1] == 0) {
				flag = false;
				break;
			}

			while (v[i] >= v[i + 1]) {
				v[i] /= 2;
				oper++;
			}
		}

		if (flag) cout << oper << endl;
		else cout << "-1" << endl;
	}
}
