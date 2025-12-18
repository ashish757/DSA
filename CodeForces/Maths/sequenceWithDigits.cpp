//
// Created by Ashish Raj Singh on 18/12/25.
//
#include <iostream>
using namespace std;

int getMA(long long a) {
    int m1 = 10, m2 =0;
    while (a>0) {
        int t = a%10;
        m1 = min(m1, t);
        m2 = max(m2, t);
        a /= 10;
    }
    return m1 * m2;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long a, k;
        cin>>a>>k;

        while (--k) {
            int ma = getMA(a);
            if (ma == 0) break;
            a = a + ma;
        }

        cout << a << endl;


    }
}