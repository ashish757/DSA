//
// Created by Ashish Raj Singh on 12/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long a,b;
        cin>>a>>b;
        if (a == 1) cout<<b<<"\n";
        else cout<<(a-1)*9 + b<<"\n";
    }
}