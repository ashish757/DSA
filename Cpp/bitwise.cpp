#include<iostream>
#include<math.h>
#include<string>

using namespace std;


int noOfSetBits(int n1, int n2) {
    int bits = 0;
    while (n1 !=0 || n2 != 0 ) {
        int bit = n1 & 1; 
        if (bit) {
            bits++;
        }

        bit = n2 & 1; 
        if (bit) {
            bits++;
        }

        n1 = n1>>1;
        n2 = n2>>1;

    }
    return bits;
}

int main() {

    // int n;
    // cin>>n;
    // // decimal to binary by bit manupulation
    // int answer = 0;
    // int i = 0;

    // while(n!=0) {
    //     // gives last bit of the no
    //     int bit = n & 1;

    //     answer = answer + (bit * pow(10, i));

    //     i++;
    //     // used last bit so right shift to remove last bit
    //     n = n>>1;

    // }

    // cout<<answer;


//    int n;
//     cin>>n;

    // convert -ve n to +ve n
    // n = n / -1;
    // cout<<n;

    // // take n's one's complement and equate
    // n = ~n;
    // cout<<n;

    // // take 2's complement
    // n++;
    // cout<<n;

    // // decimal to binary by bit manupulation
    // int answer = 0;
    // int i = 0;

    // while(n!=0) {
    //     // gives last bit of the no
    //     int bit = n & 1;

    //     answer = answer + (bit * pow(10, i));

    //     i++;
    //     // used last bit so right shift to remove last bit
    //     n = n>>1;

    // }

    // cout<<answer;

        // int mask = 0 ;
        // int notOfN = ~n;

        // while (n!=0) {
            
        //     n = n>>1;
        //     mask = mask <<1;
        //     mask = mask | 1;
        // }

        // cout<<mask;
        // cout<<notOfN;

        // cout<<(notOfN & mask);

    // int bits = noOfSetBits(4,4);
    // cout<<bits;


    return 0;

}