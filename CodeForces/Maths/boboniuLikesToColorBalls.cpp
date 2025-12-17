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
        int odd = r%2 + g%2+ b%2 + w%2;
        if (odd <= 1) cout<<"YES"<<endl;
        else if (r>0 && g>0 && b>0 && (r-1)%2 + (g-1)%2+ (b-1)%2 + (w+3)%2 <= 1) cout<<"YES"<<endl;
        else {
            cout<<"NO"<<endl;
        }

    }
}