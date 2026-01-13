//
// Created by Ashish Raj Singh on 27/12/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> v(n);
        long long rsum = 0;
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            rsum += v[i];
        }

        long long lsum = 0;
        long  long ma= -2e18;
        for (int i = 0; i < n; i++) {

                rsum -= v[i];

                if (i == n-1){
                    rsum = 0;
                }


                long long d = lsum - rsum;
                ma = max(ma, d);
                if (i == 0) lsum += v[i];
                else lsum += abs(v[i]);
        }

        cout << ma << endl;

    }
}