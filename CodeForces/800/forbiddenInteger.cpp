//
// Created by Ashish Raj Singh on 26/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k, x;
        cin>>n>>k>>x;

        if (x != 1) {
            cout<<"YES"<<endl<<n<<endl;
            for (int i = 1; i <= n; i++) {
                cout<<1<<" ";
            }
            cout<<endl;
        } else if (k == 1 ||( k == 2 && n % 2 == 1) ){
            cout<<"NO"<<endl;
        }
        else if (n % 2 == 0) {
            cout<<"YES"<<endl<<n/2<<endl;
            for (int i = 1; i <= n/2; i++) {
                cout<<2<<" ";
            }
            cout<<endl;
        } else {
            int twos = (n-3)/2;
            cout<<"YES"<<endl<<twos+1<<endl;
            for (int i = 1; i <= twos; i++) {
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }

    }
}