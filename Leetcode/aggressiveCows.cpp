//
// Created by Ashish on 26-05-2025.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int cows, int minimumGap)
{
	int lastPos = 0;
	int cowsPlaced = 1;
	for (int i=1; i<arr.size(); i++)
	{
		if ((arr[i] - arr[lastPos]) >= minimumGap)
		{
			lastPos = i;
			cowsPlaced++;

		}
		if (cowsPlaced == cows)
		{
			return true;

		}
	}
	return false;
}

int aggressiveCows(vector<int> arr, int cows)
{
	sort(arr.begin(), arr.end());
	int start = 1, end = arr[arr.size()-1] - arr[0];

	int ans = -1;
	while (start <= end)
	{
		int mid = start + (end - start)/2;
		if (isValid(arr, cows, mid))
		{
			ans =  mid;
			start = mid+1;
		} else
		{
			end = mid-1;
		}
	}
	return ans;


}


int main()
{
	vector<int> arr = {1,4,2,8,9};
	cout<<aggressiveCows(arr, 3);
	return 0;
}