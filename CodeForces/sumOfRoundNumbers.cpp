//
// Created by Ashish Raj Singh on 29/09/25.
//

#include <iostream>
#include <cmath>
using namespace std;

// round -> 9,3,4 20000, 50000
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int len = to_string(n).size();
        int c = 0;
        for (int i = 0; i < len; i++) {
            if (to_string(n)[i] != '0')c++;

        }
        cout<<c<<endl;
        for (int i = 0; i <= c; i++) {

            len = to_string(n).size();
            int d = pow(10,len - 1 );
            if (n == 0) {
                break;
            };

            cout<< n/d * pow(10,len -1) << " ";
            n = n - n/d * pow(10,len -1);
        }
        cout<<endl;


    }
    // 5009 / 1000
    // 5009 - 5000 = 009

    return 0;
}