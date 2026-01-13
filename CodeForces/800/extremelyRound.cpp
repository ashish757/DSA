//
// Created by Ashish Raj Singh on 07/01/26.
//

#include <iostream>
using namespace std;

#define endl "\n"

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        unsigned int const n = s.length();
        if (n == 1) {
            cout<<s<<endl;
            continue;
        }

        int ans = 10;
        for(int i=0;i<n-2;i++) {
            ans+=9;
        }

        ans += (static_cast<int>(s[0]) - '0') -1;

        cout<<ans<<endl;
    }
}