//
// Created by Ashish Raj Singh on 08/11/25.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int odd = 0;
        int even = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int a;
            cin>>a;
            sum += a;

            if (a % 2 ==0) even++;
            else odd++;

        }
        if (sum % 2 != 0) cout<<"YES"<<endl;
        else {
            if (even > 0 && odd > 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}