//
// Created by Ashish Raj Singh on 12/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        if (n > 14 && n%14 >= 1 && n%14 <= 6) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}