//
// Created by Ashish Raj Singh on 11/12/25.
//

#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int ans = 0;
        int gap = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '0') {
                gap++;
                ans = max(ans, gap);
            } else {
                gap = 0;
            }
        }

        int cgap =0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                break;
            }
            cgap++;

        }
        for (int i = n-1; i >= 0; i--) {
            if (a[i] == '1') {
                break;
            }
            cgap++;
        }

        cout << max(ans, cgap) << endl;







    }
    return 0;
}