//
// Created by Ashish Raj Singh on 14/01/26.
//

#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
        }

        if (n % 2 == 0) {
            cout<<2<<"\n";
            cout<<"1 "<<n<<"\n";
            cout<<"1 "<<n<<"\n";
        } else {
            cout<<"4\n";
            cout<<"1 "<<n-1<<"\n";
            cout<<"1 "<<n-1<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            cout<<n-1<<" "<<n<<"\n";
        }
    }
}