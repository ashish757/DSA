#include <bits/stdc++.h>
using namespace std;

// solved after contest

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
    
        vector<int> v(n);
        int m =  0;

        for (int i = 0; i < n; i++) {
            cin>>v[i];
            m = max(v[i], m);
        }
        
        int noOfM = 0;
        int noOfM_1 = 0;
        
        for(int i =0;i<n;i++){
            if(m == v[i]) noOfM++;
            else if(m-1 == v[i]) noOfM_1++;
        }
    
        int answer;
        
        if(noOfM_1 == n-1) answer = m-2;
        else answer = m-1;
        

        cout << answer << "\n";
    }
    
    return 0;
}