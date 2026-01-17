//
// Created by Ashish Raj Singh on 17/01/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
            bool isOneFound = false;
            bool isOnlyOneZero = true;
            bool isZeroFound = false;
            for(int i = 0; i < n; i++){
                int k;
                cin>>k;
                if(k == 0 && !isZeroFound){
                    isZeroFound = true;
                }else if(k == 0 && isZeroFound){
                    isOnlyOneZero = false;
                }else if(k == 1 && !isOneFound){
                    isOneFound = true;
                }
            }

            if(isZeroFound && (isOneFound || isOnlyOneZero)){
             cout<<"YES"<<endl;
            }else{
               cout<<"NO"<<endl;
            }
    }
}