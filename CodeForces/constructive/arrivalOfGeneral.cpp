//
// Created by Ashish Raj Singh on 07/10/25.
//
#include <iostream>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    pair<int, int> max = {INT_MIN, 0};
    pair<int, int> min = {INT_MAX, 0};
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        if (a > max.first) {
            max.first = a;
            max.second = i;
        }
        if (a <= min.first) {
            min.first = a;
            min.second = i;
        }
    }

    if (min.second < max.second) {
        cout<<max.second + (n - min.second - 1) - 1<<endl;
    } else {
        cout<<max.second + (n - min.second - 1) <<endl;
    }

    return 0;
}