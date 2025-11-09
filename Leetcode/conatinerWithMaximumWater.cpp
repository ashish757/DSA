//
// Created by Ashish on 23-05-2025.
//

#include <iostream>
using namespace std;

int maxWater(const int arr[], const int size)
{
    int left = 0;
    int right = size-1;

    int height = min(arr[left], arr[right]);
    int width = right-left;
    int water= height*width;

    for (int i =1; i<size; i++)
    {
        if (height * width > water)
        {
            cout<<left<<" "<<right<<endl;
            water = height*width;
        }

        if (arr[left] > arr[right]) right--;
        else left++;
        height = min(arr[left], arr[right]);
        width = right-left;

    }

    return water;

}


int main()
{
    const int arr[] = {1,8,6,50,5,4,8,3,30};
    cout<<maxWater(arr, 9);
    return 0;
}
