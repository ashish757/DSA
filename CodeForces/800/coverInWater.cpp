//
// Created by Ashish Raj Singh on 19/12/25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;
        if (n == 1) {
            if (s[0] == '.') cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        int iso = static_cast<int>(s[0] == '.') + static_cast<int>(s[n-1] == '.');
        bool flag = false;
        for (int i = 1; i < n-1; i++) {
            if (s[i-1] == s[i+1] && s[i+1] == '.' && s[i] == '.')  flag = true;
            if (s[i] == '.') iso++;
        }

        if (flag) cout<<2<<endl;
        else cout<<iso<<endl;


    }
}