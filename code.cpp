//
// Created by Ashish Raj Singh on 15/07/25.
//
#include <iostream>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    vector<pair<int, int>> continuedH;
    stack<int> s;

    int max = INT_MIN;

    for (int i = 0; i < heights.size(); i++) {
        for (auto e: continuedH) {
            if (e.first > heights[i]) {
                e.first = heights[i];
                e.second = e.second + 1;
            } else {
                e.second = e.second + 1;
            }
            int area = e.second * e.first;
            if (area > max) max  = area;
        }

        pair<int, int> p;
        p.first = heights[i];
        p.second = 1;
        continuedH.push_back(p);
    }

    long long area = continuedH[continuedH.size() -1].first * continuedH[continuedH.size() -1].second;
    if (area > max) max = area;
    return max;

}
int main() {
    vector<int> arr = {2,1,5,6,2,3};

    int ans = largestRectangleArea(arr);

    cout << ans << endl;

    cout<<"Result "<<endl;
    for (int e: arr) {
        cout<<e<< " ";
    }

    return 0;
}
