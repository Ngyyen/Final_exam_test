#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int singleNumber(vector<int>& nums);

int main()
{
	vector<int> vec2 = { 2,2,1 };
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	cout << singleNumber(vec);
	return 0;
}

int singleNumber(vector<int>& nums)
{
	int size = nums.size();
	if (size == 1) {
		return nums[0];
	}
	sort(nums.begin(), nums.end());
	if (nums[0] != nums[1] && nums[1]==nums[2]) {
		return nums[0];
	}
	if (nums[size-2] != nums[size-1] && nums[size-2] == nums[size-3]) {
		return nums[size-1];
	}
	for (int i = 1; i < size - 1; ++i) {
		if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
			return nums[i];
		}
	}
	return -1;
}