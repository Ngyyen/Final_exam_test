#include <iostream>
#include <vector>
using namespace std;

int find_max(const vector<int>& vec);

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
	cout << find_max(vec);
	return 0;
}

int find_max(const vector<int>& vec)
{
	int max = vec[0];
	for (int c : vec) {
		if (c > max) {
			max = c;
		}
	}
	return max;
}