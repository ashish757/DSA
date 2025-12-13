//
// Created by Ashish Raj Singh on 13/12/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n < 6 || n %2 != 0) cout<<0<<"\n";

    // cout<<((n/2-1) /2)<<"\n";

    else if (n % 4 == 0) cout<<n/4 -1<<"\n";
    else cout<<n/4<<"\n";
    return 0;
}