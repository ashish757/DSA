//
// Created by Ashish Raj Singh on 25/11/25.
//

#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y ,n;
        cin>>x>>y>>n;
        int ans;

        const int r = n % x;
        if(r >= y) ans = (n- r + y);
        else ans = n -r -x +y;

        cout<<ans<<endl;

    }
    return 0;
}