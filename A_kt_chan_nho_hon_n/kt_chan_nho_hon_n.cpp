#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, t;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	cin >> t;
	for (int i = 0; i < n; ++i) {
		if (vec[i] < t && vec[i] % 2 == 0) {
			cout << "true";
			return 0;
		}
	}
	cout << "false";
	return 0;
}