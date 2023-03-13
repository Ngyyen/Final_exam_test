#include <iostream>
#include <vector>
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
	for (int i = 0; i < n-1; ++i) {
		if (vec[i] > vec[i + 1]) {
			cout << "false";
			return 0;
		}
	}
	cout << "true";
	return 0;
}