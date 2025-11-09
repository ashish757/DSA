//
// Created by Ashish Raj Singh on 03/10/25.
//
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n ==1) return false;
    if (n == 2) return true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i =0; i < n; i++)
        {
            int e;
            cin>>e;
            v.push_back(e);
        }
        int count = 0;
        for(int i =0; i < n - 1; i++)
        {
            for ( int j = i+1; j < n; j++)
            {
                if (isPrime(v[i] + v [j])) count++;
            }
        }

        cout<<count<<endl;
    }

}
