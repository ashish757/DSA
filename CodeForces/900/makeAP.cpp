//
// Created by Ashish Raj Singh on 20/04/26.
//
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--) {
		long long a, b, c;
		cin >> a >> b >> c;

		long long targetA = 2 * b - c;
		long long targetB = a + c;
		long long targetC = 2 * b - a;

		bool canModifyA = (targetA > 0 && targetA % a == 0);
		bool canModifyB = (targetB % 2 == 0 && (targetB / 2) > 0 && (targetB / 2) % b == 0);
		bool canModifyC = (targetC > 0 && targetC % c == 0);

		if (canModifyA || canModifyB || canModifyC) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}