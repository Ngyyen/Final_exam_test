#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k, t;
	cin >> n >> k >> t;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	vec.insert(vec.begin() + k, t);
	for (int c : vec)
		cout << c << " ";
	return 0;
}