//
// Created by Ashish Raj Singh on 20/01/26.
//
#include <iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        if (n % 2 == 1 || n < 4) cout<<"-1"<<endl;
        else  {
            cout<<(n+5)/6<<" "<<n/4<<endl;
        }
    }
}