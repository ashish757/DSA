
#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
#include <vector>

vector<vector<int>> threeSum(vector<int>& nums, int n)
{
	vector<vector<int>> triplets = {};
	set<vector<int>> tripletSet = {};
	unordered_map<int, int> store = {};

	for (int i =0 ; i<n; i++)
	{
		store.emplace(nums[i], i);
	}

	int first = 0, sec = 1;
	for (int i = 0; i< n; i++)
	{
		if (sec >= n)  break;

		for (int j= sec+1; j<n; j++)
		{
		int target = -(nums[first]+nums[sec]);

			if (store.find(target) != store.end() && store[target] != first && store[target] != sec)
			{
				vector<int> triplet = {nums[first], nums[sec], target};
				sort(triplet.begin(), triplet.end());

				if (tripletSet.find(triplet) == tripletSet.end())
				{
					tripletSet.emplace(triplet);
					triplets.push_back(triplet);
				}
			}
			sec++;
		}
		first++;
	}
	return triplets;

}


int main()
{
	vector<int> nums = {1,2,-2,-1};

	vector<vector<int>> result = threeSum(nums, nums.size());

	for (vector<int> triplet: result)
	{
		for (int i: triplet)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

	return 0;
}