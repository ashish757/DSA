//
// Created by Ashish Raj Singh on 03/10/25.
//

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    // bool left =  false;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {

            if (i % 4 == 0 || i % 4 == 2) cout<<"#";
            else if (i % 4 == 1 && j == m) cout<<"#";
            else if (i % 4 == 3 && j == 1) cout<<"#";
            else cout<<".";

            // if (i % 2 != 0) {
            //     cout<<"#";
            // } else {
            //     if (j == 1 && left){
            //         cout << "#" ;
            //     }
            //     else if (j == m && !left) {
            //         cout << "#";
            //     } else {
            //         cout<<".";
            //     }
            // }

        }

        // if (i % 2 == 0) {
        //     left = !left;
        // }

        cout<<endl;
    }

    return 0;
}