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


        vector<int> p(n + 1);
        int low = 1, high = n;
        bool turn = true;

        for (int i = n; i >= 1; i--) {
            if (turn) {
                p[i] = low++;
            } else {
                p[i] = high--;
            }
            turn = !turn;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << (i == n ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}