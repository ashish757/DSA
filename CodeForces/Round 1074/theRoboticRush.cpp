//
// Created by Ashish Raj Singh on 18/01/26.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        string instruct;
        cin >> instruct;

        sort(b.begin(), b.end());


        vector<int> timeL(k + 1, k + 1);
        vector<int> timeR(k + 1, k + 1);

        int curOff = 0, ml = 0, mr = 0;
        for (int i = 1; i <= k; i++) {
            if (instruct[i-1] == 'L') curOff--;
            else curOff++;

            if (-curOff > ml) {
                ml = -curOff;
                if (ml <= k) timeL[ml] = min(timeL[ml], i);
            }
            if (curOff > mr) {
                mr = curOff;
                if (mr <= k) timeR[mr] = min(timeR[mr], i);
            }
        }


        vector<int> deaths(k + 2, 0);
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            int tl = k + 1, tr = k + 1;

            if (it != b.end()) {
                int dr = *it - a[i];
                if (dr <= k) tr = timeR[dr];
            }

            if (it != b.begin()) {
                int dl = a[i] - *prev(it);
                if (dl <= k) tl = timeL[dl];
            }

            int deathtime = min(tl, tr);
            if (deathtime <= k) deaths[deathtime]++;
        }


        int alive = n;
        for (int i = 1; i <= k; i++) {
            alive -= deaths[i];
            cout << alive << (i == k ? "" : " ");
        }
        cout << "\n";



    }

}