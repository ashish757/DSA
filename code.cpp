//
// Created by Ashish Raj Singh on 15/07/25.
//
#include <iostream>
#include <cmath>
using namespace std;



void func() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int minCh = 0;
        int tempCh = -1;


        for (int i = 0; i<n; i++)
        {
            if(s[i] == '1') {

                minCh += tempCh == -1 ? 0 : tempCh ;
                tempCh = 0;
            }
            if(tempCh != -1 && s[i] != '1') {
                tempCh++;
            }
        }

        cout<<minCh<<endl;

    }

    return;

}

void a() {

    // write a program to check largest number among threee numbers using a nested if else
    int a, b ,c ;
    cin>>a>>b>>c;
    if (a > b) {
        if (a > c) cout<<a;
    }
    if (b > a) {
        if (b >c) cout<<b;
    }
    if (c > a) {
        if (c > b) cout<<c;
    }
}
// 1 5 3
// 1 6 4
void armstrong() {
    // to check whether a number armstrong or not
    int a, b, c;
    cin>>a>>b>>c;
    int cal = pow(a, 3) + pow(b, 3) + pow(c, 3);
    if (cal == (a + b + c)) {
        cout<<true;
    }
    else cout<<false;
}


void isPrime(int n) {
    if (n <= 1) return;
    if (n <= 3) return;
    // if (n % 2 == 0 || n % 3 == 0) return;

    for (int i = 5; i * i <= n; i += 6) {
        cout<<i<<" "<<i+2<<endl;
        // if (n % i == 0 || n % (i + 2) == 0)
        // return false;
    }
}


int fofs(vector<int> &v, int a, int b) {
    int s = 0;
    int c = 0;
    for(int i = a; i <= b; i++) {
        s += v[i];
        c++;
    }

    int avg = floor(s/c);
    int ans = 0;

    for(int i = a; i<=b; i++) {
        ans = max(ans, abs(avg - v[i]));
    }

    return ans;
}

int main() {
    // your code goes here
    // isPrime(n);


        int t;
        cin>>t;
        while(t--) {
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i =0; i<n;i++) {
                cin>>v[i];
            }

            int ans = 0;

            for(int i = 0; i < n; i++) {

                for(int j = i+1; j < n; j++) {
                    ans = max(ans, fofs(v, i, j));
                }
            }

            cout<<ans<<endl;

    }


}
