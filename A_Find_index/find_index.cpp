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
	vector<int> kq;
	for (int i = 0; i < n; ++i) {
		if (vec[i] == t) {
			kq.push_back(i);
		}
	}
	if (kq.size() == 0) {
		cout << -1;
	}
	else {
		for (int c : kq) {
			cout << c << " ";
		}
	}
	return 0;
}