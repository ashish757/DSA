//
// Created by Ashish Raj Singh on 10/11/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, n;
        cin>>a>>b>>c>>n;

        int x = max({a, b, c});
        int z = min({a, b, c});

        int y = a + b + c - x - z;

        if (n < (2 * x - y -z)) {
            cout<<"NO"<<endl;
        } else {
            if ((n- (2 * x - y -z)) % 3 == 0) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}