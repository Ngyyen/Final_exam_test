#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int);
int prime_max(const vector<int>& vec);

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
	cout << prime_max(vec);
	return 0;
}

bool is_prime(int n)
{
	if (n <= 1) {
		return false;
	}
	for (long i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int prime_max(const vector<int>& vec)
{
	int first = -1;
	for (int c : vec) {
		if (is_prime(c)) {
			first = c;
			break;
		}
	}
	if (first == -1) {
		return -1;
	}
	int max = first;
	for (int c : vec) {
		if (c > max && is_prime(c)) {
			max = c;
		}
	}
	return max;
}