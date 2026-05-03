//
// Created by Ashish Raj Singh on 02/05/26.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;


		vector<int> freqA(2*n+1, 0);
		vector<int> freqB(2*n+1, 0);

		int currentStreak = 0;
		int preElement = -1;
		for(int i=0; i<n; i++) {
			int x;
			cin>>x;

			if (preElement == x) {
				currentStreak++;
			} else {
				preElement = x;
				currentStreak = 1;
			}

			freqA[x] = max(freqA[x], currentStreak);
		}
		preElement = -1;
		currentStreak = 0;
		for(int i=0; i<n; i++) {
			int x;
			cin>>x;

			if (preElement == x) {
				currentStreak++;
			} else {
				preElement = x;
				currentStreak = 1;
			}

			freqB[x] = max(freqB[x], currentStreak);
		}

		int ans = INT_MIN;

		for (int i =0; i<=2* n; i++) {
			ans = max(ans, freqA[i] + freqB[i]);
		}


		cout<<ans<<"\n";
	}
}