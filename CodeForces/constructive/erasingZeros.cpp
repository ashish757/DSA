//
// Created by Ashish Raj Singh on 20/10/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int count = -1;
        int ans = 0;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '1' && count == -1) count = 0;
            if (s[i] == '0' && count != -1) {
                count++;
            }
            if (count > 0 && s[i] == '1') {
                ans += count;
                count = 0;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
