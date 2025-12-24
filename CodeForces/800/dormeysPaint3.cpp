//
// Created by Ashish Raj Singh on 19/12/25.
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
        for (int i = 0; i < n; i++) cin>>v[i];

        int a = v[0], b = -1;
        bool flag = false;
        int ca =0, cb=0;
        for (int i = 0; i < n; i++) {
            if (v[i] == a) ca++;
            else if (b == -1 || v[i] == b) {
                b = v[i];
                cb++;
            } else {
              flag = true;
            }

        }

        if (flag) cout<<"No"<<endl;
        else if (ca == cb || ca +1 == cb || ca -1 == cb || ca == n || cb == n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
}