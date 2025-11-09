//
// Created by Ashish on 21-05-2025.
//

#include <iostream>
using namespace std;

int decToBin(int num){
    int binary = 0, multiplier = 1;
    
    while (num > 0) {
        
        binary += (num % 2) * multiplier;
        multiplier = multiplier*10;

        num = num/2;

    }

    return binary;
}

int binToDec(int num){
    int decimal = 0, multiplier = 1;
    

    while (num > 0) {

        decimal += (num % 10) * multiplier;
        multiplier = multiplier * 2;
        num = num/10;
    }
    return decimal;

}


// incomplete, after compliment i get an integer which start with zero and i must show it but, integer cant start with zero in cpp
int onesCompliment(int bin) {
    int compliment = 0, multiplier = 1;

    while (bin > 0) {
        if (bin%10 == 0)  compliment += 1 * multiplier;

        multiplier = multiplier *10;
        bin = bin/10;
    }
    return compliment;
    
}


int  main(){

    cout<<"Hello World"<<endl;
    cout<< decToBin(10)<<endl;
    cout<< binToDec(1010)<<endl;
    cout<< onesCompliment(1010110101)<<endl;

// bitwise operators
// &, |
// xor if same --> 0
// << left shit
// >> right shift
// a << b = a*(2^b) --> 2 raised to b
// a >> b = a/(2^b) Or a*(b^-b)

    cout<< (4<<1)<<endl;


    return 0;
}



