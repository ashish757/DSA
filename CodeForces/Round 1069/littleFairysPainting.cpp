//
// Created by Ashish Raj Singh on 06/12/25.
//

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unordered_set<unsigned long long> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            m.insert(a);
        }


        while (true) {
            unsigned long long ic  = m.size();

            m.insert(ic);

            if (ic == m.size()) {
                cout<<ic<<endl;
                break;
            }
        }

    }



    return 0;
}