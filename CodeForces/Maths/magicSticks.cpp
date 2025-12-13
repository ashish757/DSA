//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        if (m < n) {
            cout<<"YES"<<"\n";
            continue;
        }

            if (n <= 3) {
                if (n == m) cout<<"YES"<<"\n";
                else if (n == 2 && (m ==1 || m==3)) cout<<"YES"<<"\n";
                else if (n == 3 && m == 2) cout<<"YES"<<"\n";
                else cout<<"NO"<<"\n";
            }
            else cout<<"YES"<<"\n";
    }
}