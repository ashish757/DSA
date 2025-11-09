//
// Created by Ashish on 24-05-2025.
//

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> arr, int target)
{
    int left = 0, right = arr.size()-1;
    int mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (target > arr[mid])
        {
            left = mid+1;
        }
        else if (target < arr[mid])
        {
            right = mid-1;
        } else
        {
            return mid;
        }
    }
    return -1;

}

int main()
{
    const vector<int> arr= {1,2,3,4};
    cout<<binarySearch(arr, 3);



    return 0;
}