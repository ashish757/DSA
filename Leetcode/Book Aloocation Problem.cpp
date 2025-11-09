//
// Created by Ashish on 25-05-2025.
//

 #include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int students, int maxPages)
{
	int usedStudents = 1;
	int currentPages = 0;
	for (int i : arr)
	{
		if (i > maxPages) return false;
		if (currentPages+i <= maxPages) currentPages += i;
		else
		{
			currentPages = i;
			usedStudents++;
		}
	}
	return usedStudents <= students;

}

int bookAllotment(vector<int> arr, int students)
{
	int range = 0;
	for (int i : arr)
	{
		range += i;
	}

	int start = 0, end = range;
	int ans = -1;

	while (start<=end)
	{
		int mid = start + (end-start)/2;

		if (isValid(arr, students, mid))
		{
			ans = mid;
			end = mid-1;
		} else
		{
			start = mid+1;
		}

	}
	return ans;

}

int main()
{

	vector<int> arr = {15, 17, 3};
	cout<<bookAllotment(arr, 2);
	// cout<<isValid(arr, 2, 20);

	return 0;

}