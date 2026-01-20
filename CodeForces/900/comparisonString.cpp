//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
using namespace std;

#define endl "\n"

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxSub = 0;
        int curr = 1;
        for(int i=0;i<n-1;i++) {
           if (s[i] == s[i+1]) curr++;
           else {
               maxSub = max(maxSub, curr);
               curr = 1;
           }
        }

        maxSub = max(maxSub, curr);

        cout<<maxSub+1<<endl;
    }
}