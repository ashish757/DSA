//
// Created by Ashish Raj Singh on 07/01/26.
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
        int c =0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
           cin>>v[i];
           if (v[i] == 2) c++;
        }

        if (c == 0) cout<<"1\n"<<endl;
        else if (c %  2 ==0) {
            int twos = c/2;
            for (int i = 0; i < n; ++i) {
                if (twos == 0) {
                    cout<<i<<"\n";
                    break;
                }
                if (v[i] == 2) twos--;
            }
        }
        else cout<<"-1\n";
    }
}