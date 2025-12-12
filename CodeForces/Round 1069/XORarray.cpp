//
// Created by Ashish Raj Singh on 06/12/25.
//
#include <iostream>
#include <vector>
using namespace std;
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n);

        set<int> history;
        history.insert(0);

        int current_xor = 0;
        int target_xor_at_start = 0;
        int next_val = 1;

        for (int i = 0; i < n; i++) {

            if (i == r - 1) {
                int needed_val = current_xor ^ target_xor_at_start;
                v[i] = needed_val;
                current_xor = current_xor ^ needed_val;
            }

            else {
                while (true) {
                    int candidate_xor = current_xor ^ next_val;

                    if (history.find(candidate_xor) == history.end()) {
                        v[i] = next_val;
                        current_xor = candidate_xor;
                        history.insert(current_xor);
                        next_val++;
                        break;
                    }
                    next_val++;
                }
            }

            if (i == l - 2) {
                target_xor_at_start = current_xor;
            }
        }

        for (int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}