//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <vector>
using namespace std;

long long getSubSum(vector<long long> &v, int l, int r) {
    if (l == 1) {
        return v[r-1];
    }
    return v[r-1] - v[l-2];
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, q;
        cin>>n>>q;
        vector<int> v(n);
        vector<long long> preSum(n);

        long long sum= 0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum+=v[i];
            preSum[i] = sum;
        }

        for (int i =0; i < q; i++) {
            int l, r, k;
            cin>>l>>r>>k;

            long long s = preSum[n-1] - getSubSum(preSum, l, r) + (r-l+1)*k;

            if (s%2==0) {
                cout<<"No"<<endl;
            } else cout<<"Yes"<<endl;
        }

    }
}