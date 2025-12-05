//
// Created by Ashish Raj Singh on 29/11/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int odd =0, even =0;
        int moves =0;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;

            if (a % 2 ==0) {
                even++;
                if (i%2 != 0) moves++;
            }
            else {
                odd++;
                if (i%2 == 0) moves++;
            }
        }

        if (odd == n/2 && even == (n+1)/2) {
            cout<< moves/2 <<endl;

        } else {
            cout<<-1<<endl;
        }

    }
    return 0;
}