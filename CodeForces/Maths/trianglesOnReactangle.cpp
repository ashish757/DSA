//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int w, h;
        cin>>w>>h;
        int k;

        cin>>k;
        vector<int> vx1(k);
        for(int i=0; i<k; i++) cin>>vx1[i];
        cin>>k;
        vector<int> vx2(k);
        for(int i=0; i<k; i++) cin>>vx2[i];

        cin>>k;
        vector<int> vy1(k);
        for(int i=0; i<k; i++) cin>>vy1[i];
        cin>>k;
        vector<int> vy2(k);
        for(int i=0; i<k; i++) cin>>vy2[i];

        long long wi = 0;
        if (abs(vx1[0] - vx1.back()) > abs(vx2[0] - vx2.back()) ) {
            wi = abs(vx1[0] - vx1.back());
        } else {
            wi = abs(vx2[0] - vx2.back());
        }

        long long ans1 = wi * h;

        long long hi = 0;
        if (abs(vy1[0] - vy1.back()) > abs(vy2[0] - vy2.back()) ) {
            hi = abs(vy1[0] - vy1.back());
        } else {
            hi = abs(vy2[0] - vy2.back());
        }

        long long ans2 = w * hi;

        cout<<max(ans1, ans2)<<"\n";

    }
}