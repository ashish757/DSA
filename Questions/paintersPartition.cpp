//
// Created by Ashish on 02-06-2025.
//

#include <iostream>
#include <vector>
using namespace std;

bool isValidAnswer(vector<int> arr, int painters, int ans)
{
	int paintersUsed = 1;
	int timeTaken = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if ((timeTaken + arr[i]) <= ans )
		{
			timeTaken += arr[i];
		} else
		{
			timeTaken = arr[i];
			paintersUsed++;
		}
	}
	if (paintersUsed > painters) return false;

	return true;
}

int painterPartition(vector<int> arr, int painters)
{
	int start = 0, end = 0;

	for ( int i: arr)
	{
		start =  max(start, i);
		end += i;
	}
int ans = -1;
	while (start <= end)
	{
		int mid = start + (end - start)/2;

		if (isValidAnswer(arr, painters, mid))
		{
			ans = mid;
			end = mid -1;
		} else
		{
			start = mid +1;
		}
	}

	return ans;
}


int main()
{
	vector<int> arr = {3, 10, 40};

	cout<<painterPartition(arr, 2);
	return 0;
}



