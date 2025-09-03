//
// Created by Ashish Raj Singh on 03/09/25.
//

#include <iostream>;
using namespace std;

class StockSpanner {
public:
    stack<int> s;
    int day = -1;
    vector<int> v;
    StockSpanner() {

    }

    int next(int price) {
        day++;
        v.push_back(price);

        while(!s.empty()) {
            if(v[s.top()] <= price) {
                s.pop();
            } else {
                int ans  = day - s.top();
                s.push(day);

                return ans;
            }
        }

        s.push(day);
        return day+1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */