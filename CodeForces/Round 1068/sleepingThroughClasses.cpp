//
// Created by Ashish Raj Singh on 05/12/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        string s;
        cin>>n>>k;
        cin>>s;

        int sc = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if (sc > 0) {
                if (s[i] == '1') {
                    sc = k;
                } else {
                    sc--;
                }
                continue;
            }
            if (s[i] == '1') {
                sc =k;
            } else {
                ans++;
            }

        }

        cout<<ans<<endl;
    }
}