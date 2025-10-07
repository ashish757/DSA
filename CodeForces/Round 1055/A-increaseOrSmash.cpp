//
// Created by Ashish Raj Singh on 03/10/25.
//

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> s;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.emplace(a);
        }
        cout <<( s.size() * 2 )- 1 << endl;
    }
    return 0;
}