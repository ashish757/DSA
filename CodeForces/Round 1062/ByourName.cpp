//
// Created by Ashish Raj Singh on 28/10/25.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;

        int freq[26] = {0};
        for (const char c : s1) freq[c - 'a']++;
        for (const char c : s2) freq[c - 'a']--;

        bool ok = true;
        for (const int i : freq) {
            if (i != 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}