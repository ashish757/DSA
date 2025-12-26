//
// Created by Ashish Raj Singh on 24/12/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> ans;
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++) {
            if (v[i-1] > v[i]) {
                ans.push_back(1);
                ans.push_back(v[i]);
            } else {
                ans.push_back(v[i]);
            }
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
        cout<<"\n";

    }
}