#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
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
	unordered_map<int, int> my_map;
	for (int c : vec) {
		++my_map[c];
	}
	int max = 0;
	for (auto pa : my_map) {
		if (pa.second > max) {
			max = pa.second;
		}
	}
	vector<int> kq;
	for (int c : vec) {
		if (my_map[c] == max && find(kq.begin(), kq.end(), c) == kq.end()) {
			kq.push_back(c);
		}
	}
	for (int c : kq) {
		cout << c << " ";
	}
	return 0;
}