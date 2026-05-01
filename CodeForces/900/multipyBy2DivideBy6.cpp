//
// Created by Ashish Raj Singh on 01/05/26.
//

#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;


		int three = 0;

		while (n % 3 == 0 && n != 0) {
			three++;
			n /= 3;
		}

		int two = 0;
		while (n % 2 == 0 && n != 0) {
			two++;
			n /= 2;
		}

		if (n != 1 || two > three) cout<<"-1\n";
		else  {
			cout<<three + three -two<<"\n";
		}

	}
}