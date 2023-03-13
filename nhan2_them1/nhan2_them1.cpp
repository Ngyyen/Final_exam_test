#include <iostream>
using namespace std;

bool check(unsigned long long, unsigned long long);

int main()
{
	unsigned long long a[100], b[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; ++i) {
		if (check(a[i], b[i])) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

bool check(unsigned long long a, unsigned long long b)
{
	if (a == b) {
		return true;
	}
	while (a < b) {
		if (b % 2 != 0 && b % 10 != 1) {
			return false;
		}
		if (b % 2 == 0) {
			b = b / 2;
		}
		if (a == b) {
			return true;
		}
		int dv = b % 10;
		if (dv == 1) {
			b = b / 10;
		}
		if (a == b) {
			return true;
		}
	}
	return false;
}