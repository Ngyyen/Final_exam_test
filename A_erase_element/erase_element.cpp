#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,t;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec.push_back(val);
	}
	cin >> t;
	auto ite = vec.begin();
	while (ite != vec.end()) {
		if (*ite == t) {
			ite = vec.erase(ite);
		}
		else {
			++ite;
		}
	}
	for (int c : vec)
		cout << c << " ";
	return 0;
}