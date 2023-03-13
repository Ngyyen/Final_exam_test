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
	vector<int> kq;
	for (int i = 0; i < n; ++i) {
		if (vec[i] < 0) {
			kq.push_back(vec[i]);
		}
	}
	
	for (int c : kq) {
		cout << c << " ";
	}
	return 0;
}