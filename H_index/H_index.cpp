#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	sort(vec.begin(), vec.end());
	int dem = 0;
	for (int i = vec.size() - 1; i >= 0; --i) {
		if (vec[i] < dem) {
			break;
		}
		++dem;
	}
	cout << dem;
	return 0;
}