//
// Created by Ashish Raj Singh on 20/01/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int count=0;
        bool zero=true;
        for(int i=0;i<n;i++) {
            if (v[i] != 0) {
                if (zero) count++;
                zero = false;
            } else {
                if (!zero) {
                    zero = true;
                }
            }
        }

        cout<<(count >= 2 ? 2 : count)<<endl;

    }
}