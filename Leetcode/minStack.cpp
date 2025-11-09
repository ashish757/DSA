//
// Created by Ashish Raj Singh on 03/09/25.
//
#include <iostream>
using namespace std;


// sol 1
// all methods in o(1) time;
class MinStack {
public:
    vector<long long> v;
    long long min = INT_MAX;
    MinStack() {

    }

    void push(int val) {
        if(v.size() == 0) {
            v.push_back(val);
            min = val;
        } else {
            if (val < min) {
                long long int valPrime = val + (val - min);
                v.push_back(valPrime);
                min = val;

            } else {
                v.push_back(val);
            }
        }
    }

    void pop() {
        if(v.back() < min) {
            min = 2*min - v.back();
            v.pop_back();
        } else {
            v.pop_back();
        }
    }

    int top() {
        if(v.back() < min) {
            return min;
        } else {
            return v.back();
        }
    }

    int getMin() {
        return min;
    }
};



// sol 2;
class MinStack2 {
public:
    vector<int> v;
    int min = INT_MAX;
    MinStack2() {

    }

    void push(int val) {
        v.push_back(val);
        if(val < min) min = val;
    }

    void pop() {
        if (v.size() == 0) return;
        if(v.back() == min) {
            min = INT_MAX;
            v.pop_back();
            for(int e: v) {
                if(e < min) min = e;
            }
        } else {
            v.pop_back();
        }
    }

    int top() {
        return v.back();
    }

    int getMin() {
        return min;
    }
};