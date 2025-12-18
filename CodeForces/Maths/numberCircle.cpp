//
// Created by Ashish Raj Singh on 18/12/25.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    if (v[n-2] + v[n-3] > v[n-1]) {
        cout<<"YES"<<"\n";
        for (int i =0; i<n; i++) {
            if (i == n-2) cout<<v[i+1]<<" ";
            else if (i == n-1) cout<<v[i-1]<<" ";
            else cout<<v[i]<<" ";

        }
        cout<<"\n";
    }
    else cout<<"NO"<<endl;
}