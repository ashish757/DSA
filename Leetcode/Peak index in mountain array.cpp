//
// Created by Ashish on 25-05-2025.
//
 #include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> arr)
{
	int start = 0, end = arr.size()-1;
	int mid = start + (end-start)/2;
	while (start < end)
	{
		if (arr[mid] > arr[start])
		{
			if (arr[mid] > arr[mid+1]) return mid;
			start = mid;
		}  else if (arr[mid] > arr[end])
		{
			if (arr[mid] > arr[mid-1]) return mid;

			end = mid;
		}
		 mid = start + (end-start)/2;
	}
	return mid;
}

int main()
{

	vector<int> arr = {1,2,3,4354,4,5,3,1};
	cout<<peak(arr);

 return 0;

}