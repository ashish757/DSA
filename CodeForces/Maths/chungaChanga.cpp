//
// Created by Ashish Raj Singh on 12/12/25.
//

#include <iostream>
using namespace std;

int main() {
    long long x,y,z;
    cin>>x>>y>>z;

    const long long a= x/z;
    const long long b = y/z;
    x= x%z;
    y= y%z;

    if (x ==0 || y ==0 || x+y < z) cout<<a+b<<" "<<0<<endl;
    else {
        cout<<a+b+1<<" "<<min(z-x, z-y)<<endl;
    }

    return 0;
}