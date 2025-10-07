//
// Created by Ashish Raj Singh on 27/09/25.
//
#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<int, int> pos = {-1, -1};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int a;
            cin>>a;
            if (a == 1) {
                pos.first = i;
                pos.second = j;
                break;
            }
        }
        if (pos.first != -1) break;
    }

    cout<< abs(pos.first-2) + abs(pos.second-2) << endl;

    return 0;
}
