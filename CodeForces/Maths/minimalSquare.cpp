//
// Created by Ashish Raj Singh on 25/11/25.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int a, b;
        cin>>a>>b;
        int i = max(a, 2*b);
        int j = max(b, 2*a);
        if (i*i > j*j) {
            cout<<j*j<<endl;
        } else cout<<i*i<<endl;

    }


    return 0;
}