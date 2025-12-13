//
// Created by Ashish Raj Singh on 12/12/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m,k;
    cin>>n>>m>>k;

    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v.rbegin(),v.rend());

    long long block = k+1;
    long long bh = v[0] * k + v[1];
    long long fit = m/block;;

    long long ans = fit*bh + (m%block)*v[0];
    cout<<ans<<endl;


    return 0;
}