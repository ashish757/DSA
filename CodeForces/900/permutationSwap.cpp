//
// Created by Ashish Raj Singh on 17/01/26.
//

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int res = 0;
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            int d = abs(x- i);
            if (d != 0) {
                if (res == 0) {
                    res = d;
                }else  res = gcd(res, d);
            }
        }

        cout<<res<<endl;
    }
}
