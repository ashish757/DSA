#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int count;
        cin >> count;
        string s;
        cin >> s;

        vector<int> occupiedPos;
        for (int i = 0; i < count; i++) {
            if (s[i] == '1') {
                occupiedPos.push_back(i);
            }
        }

        if (occupiedPos.empty()) {
            cout << (count + 2) / 3 << endl;
            continue;
        }

        long long total = occupiedPos.size();

        int prefixGap = occupiedPos[0];
        if (prefixGap > 0) {
            total += (prefixGap - 1 + 2) / 3;
        }

        for (size_t i = 0; i < occupiedPos.size() - 1; i++) {
            int gapSize = occupiedPos[i + 1] - occupiedPos[i] - 1;
            if (gapSize >= 3) {
                total += (gapSize - 2 + 2) / 3;
            }
        }

        int suffixGap = (count - 1) - occupiedPos.back();
        if (suffixGap > 0) {
            total += (suffixGap - 1 + 2) / 3;
        }

        cout << total << endl;
    }
    return 0;
}