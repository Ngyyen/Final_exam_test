#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2);

int main()
{
	vector<int> nums1 = { 4,9,5 },nums2 = {9,4,9,8,4};
	int n, m;
	cin >> n >> m;
	vector<int> vec1, vec2;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec1.push_back(val);
	}
	for (int i = 0; i < m; ++i) {
		int val;
		cin >> val;
		vec2.push_back(val);
	}
	auto vec = intersection(vec1, vec2);
	for (int c : vec)
		cout << c << " ";
	return 0;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
	sort(nums1.begin(), nums1.end());
	auto ite = unique(nums1.begin(), nums1.end());
	nums1.erase(ite, nums1.end());
	vector<int> vec;
	for (int c : nums1) {
		if (find(nums2.cbegin(), nums2.cend(), c)!=nums2.end()) {
			vec.push_back(c);
		}
	}
	sort(vec.begin(), vec.end());
	return vec;
}
