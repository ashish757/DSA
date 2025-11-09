//
// Created by Ashish Raj Singh on 20/10/25.
//
#include <iostream>
using namespace std;

#define f first
#define s second


int main() {
    int t;
    cin>> t;
    while (t--) {

        int n, m;
        cin>>n>>m;
        char a[n][m];
        pair<int, int> p;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>a[i][j];
                if (a[i][j] == 'C') {
                    p.f = i;
                    p.s = j;
                }
            }
        }


        int change1 = 0;
        // * * * * D
        // * * * * D
        // * * * * D
        // R R R R C
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 'C') break;

                if (j == m-1) {
                    if (a[i][j] != 'D') {
                        a[i][j] = 'D';
                        change1++;
                    }
                } else if (i == n-1) {
                    if (a[i][j] != 'R') {
                        a[i][j] = 'R';
                        change1++;
                    }
                }
            }
        }


        cout<<change1<<endl;

        
    }


    return 0;

}