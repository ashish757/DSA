//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long r, g, b, w;
        cin>>r>>g>>b>>w;
        int odd = r%2 !=0 + g%2!=0 + b%2 != 0 + w%2 != 0;
        if (odd > 1) {
            r--;
            g--;
            b--;
            w+=3;
            odd = r%2 !=0 + g%2!=0 + b%2 != 0 + w%2 != 0;
            if (odd > 1 || r<0||g<0||b<0||w<0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        } else {
            cout<<"YES"<<endl;
        }

    }
}