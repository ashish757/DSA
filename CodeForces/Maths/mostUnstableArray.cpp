//
// Created by Ashish Raj Singh on 29/11/25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;

        if (n ==1) {
            cout<<0<<endl;
            continue;
        }

        cout<<min(2, n-1) * m<<endl;
    }
    return 0;
}