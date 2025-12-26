//
// Created by Ashish Raj Singh on 24/12/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        vector<vector<char>> v(10, vector<char>(10));
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) cin>>v[i][j];
        }

        // or just hardcode the values
        vector<vector<int>> v2= {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
            {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
            {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

        };


        int score = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (v[i][j] == 'X') {
                    int s = 0;
                    if (i == 0 || i == 9 || j == 0 || j == 9) s+=1;
                    else if (i == 1 || i == 8 || j == 1 || j == 8) s += 2;
                    else if (i == 2 || i == 7 || j == 2 || j == 7) s += 3;
                    else if (i == 3 || i == 6 || j == 3 || j == 6) s += 4;
                    else if (i == 4 || i == 5 || j == 4 || j == 5) s += 5;
                    score+=s;
                }
            }
        }

        cout<<score<<"\n";


    }
}
