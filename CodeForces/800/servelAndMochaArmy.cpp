//
// Created by Ashish Raj Singh on 07/01/26.
//
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b%a, a);
}


int main() {
    int t;
    cin>>t;
    while(t--) {
        int h;
        cin>>h;
        vector<int> v(h);
        for (int i=0;i<h;i++) cin>>v[i];

        bool flag = false;
        for (int j = 0; j < h-1; j++) {
            for (int i = j+1; i < h; i++) {
                int g = gcd(v[i], v[j]);
                if (g <= 2) {
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }


        if (!flag) cout<<"NO"<<endl;

    }

}