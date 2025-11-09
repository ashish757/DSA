//
// Created by Ashish Raj Singh on 08/11/25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;

        if (n < 3) cout<<1<<endl;

        else cout<<1 + (n-2 + (x-1)) / x<<endl;
    }
}