//
// Created by Ashish on 23-05-2025.
//


#include <iostream>
using namespace std;

int maxPro(const int arr[], int size)
{
    int buy = INT_MAX, sell = INT_MIN, maximum = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i] < buy)
        {
            buy = arr[i];
            sell = arr[i];
            // maximum = max(maximum, sell-buy);
            if (maximum < sell-buy) maximum = sell - buy;

        }
        if (arr[i] > sell)
        {
            sell = arr[i];
            if (maximum < sell-buy) maximum = sell - buy;
        }

    }
    return maximum;
}

int main()
{
    const int arr[] = {12,3,10,8,20, 1, 19};
    cout<<maxPro(arr, 7);

    return 0;
}