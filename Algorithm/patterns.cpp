#include<iostream>
#include <windows.h>
using namespace std;

int main() {

int len= 92;
char alphabet[len] = {'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z', 'Z', ' '};
//    char alphabet[len] = {'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z', 'Z', ' ', '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', ',', '-','.','/',':',';','<','=','>','?','@','[','\\',']','^','_','`','{','|','}','~', '0', '1', '2', '3', '4', '5'};


string toPrint = "Hello World";
string outPut = "";
int printCount= 0;

    for (int i=0; i<len; i++) {
        if (toPrint.length() == printCount) {break;}
        cout<<outPut<<alphabet[i]<<endl;
        if (alphabet[i] == toPrint[printCount]) {
            outPut = outPut + alphabet[i];
            printCount++;
            i = -1;
        }
     Sleep(30);
    }


    // hollow reactange
    // int row, col;
    // cin>>row>>col;
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++){
    //         if (i == 0 || i == row - 1 || j == 0 || j == col - 1 ) {
    //             cout<<"*";
    //             continue;
    //         }
    //         cout<<" ";
        
    //     }

    //     cout<<endl;
    // }


    // half inverted pyramid
    // int n; 
    // cin>>n;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // half pyramid 
    // int n; 
    // cin>>n;

    // for (int i = 1; i <= n; i++ ){
    //     for (int j = 1; j <= n; j++){

    //     // if (j >= n - i - 1) 
    //     if (j > n - i ) {
    //         cout<<"* ";
    //         continue;
    //     }
    //     cout<<"  ";

    //     }
    //     cout<<endl;
    // }

    // int n; 
    // cin>>n;

    // for (int i = 1; i <= n; i++ ){
    //     for (int j = 1; j <= n*2; j++){
    //         if (j <= i || j > n*2 - i) {
    //             cout<<"* ";
    //             continue;
    //         }

    //         cout<<"  ";
       

    //     }
    //     cout<<endl;
    // }
    // for (int i = n; i > 0; i--){
    //     for (int j = 1; j <= n*2; j++){

    //         if (j <= i || j > n*2 - i) {
    //             cout<<"* ";
    //             continue;
    //         }

    //         cout<<"  ";
       

    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n - i +1; j++){
    //         cout<<j<<" ";
    //     }
    // cout<<endl;
    // }
  
    // int n;
    // cin>>n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++){
    //         if (j <= n - i) {
    //             cout<<"  ";
    //             continue;
    //         }
    //         cout<<n - j + 1<<" ";
    //     }
    //     for (int k = 2; k <= i; k++) {
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;

    // for (int i = 1; i <= 3; i++) {
    //     for (int j = 1; j <= n; j++){
    //         if ((i + j)%4 == 0 || i == 2 && j % 4 == 0 ) {
    //             cout<<"* ";
    //             continue;
    //         }
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // fibonacci series

    // int first = 0;
    // int second  = 1;

    // for (int i = 0; i < 10; i++) {
    //     int nextNumber = first + second;
    //     first = second;
    //     second = nextNumber;

    //     cout<<nextNumber<<endl;

    // }

    return 0;
}
