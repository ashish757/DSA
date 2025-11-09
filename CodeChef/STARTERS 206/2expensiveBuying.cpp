//
// Created by Ashish Raj Singh on 03/10/25.
//
#include <iostream>
#include <set>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        multiset<int> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int price;
            cin >> price;

            s.insert(price);
            sum += price;

            if ((int) s.size() > k) {
                sum -= *s.begin();
                s.erase(s.begin()); // remove the smallest element
            }
        }

        cout<<sum<<endl;

    }

}