#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums);

int main()
{
	vector<int> vec2 = { 9,6,4,2,3,5,7,0,1 };
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
	for (int i = 0; i <= n; ++i) {
		if (find(nums.begin(), nums.end(), i) == nums.end()) {
			return i;
		}
	}
	return -1;
}