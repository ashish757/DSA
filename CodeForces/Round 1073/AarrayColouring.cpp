//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            v.emplace_back(a, i);
        }
        sort(v.begin(), v.end());
        bool p = true;
        for(int i=0;i< v.size()-1;i++) {
            if (v[i].second % 2 ==  v[i+1].second % 2 ) {
                p = false;
                break;
            }
        }

        if (p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

