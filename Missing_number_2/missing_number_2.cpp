#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums);

int main()
{
	vector<int> vec2 = {4,2,3,1 };
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	cout << missingNumber(vec);
	return 0;
}

int missingNumber(vector<int>& nums)
{
	int n = nums.size();
	sort(nums.begin(), nums.end());
	if (nums[0] != 0) {
		return 0;
	}
	if (nums[n-1] != n) {
		return n;
	}
	for (int i = 0; i < n-1; ++i) {
		if (nums[i + 1] - nums[i] == 2) {
			return nums[i] + 1;
		}
	}
	return -1;
}