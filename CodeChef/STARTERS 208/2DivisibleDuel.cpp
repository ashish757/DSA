//
// Created by Ashish Raj Singh on 23/10/25.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        int oddS = 0;
        int evenS = 0;

        for(int i = x; i <= y; i++) {
            if(i % x == 0) {
                if(i % 2 ==0) evenS += i;
                else oddS += i;
            }
        }

        evenS >= oddS ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

}
