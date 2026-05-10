//
// Created by Ashish Raj Singh on 07/05/26.
//

#include <iostream>
#include <climits>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		int n1 = s1.length();
		int n2 = s2.length();
		int cost = 0;
		int ans = n1+n2;

		for (int i =0; i<n1; i++) {
			for (int j=0; j<n2; j++) {
				if (s1[i] == s2[j]) {
					int count = 1;
					int p1 = i, p2 = j;
					while (p1+1<n1 && p2+1< n2 && s1[p1+1] == s2[p2+1]) {
						count++;
						p1++;
						p2++;
					}

					cost = n1+n2 - 2*count;
					ans = min(ans, cost);
				}
			}
		}

		cout<<ans<<"\n";
	}
}