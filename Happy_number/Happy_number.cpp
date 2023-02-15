#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool isHappy(int n);

int main()
{
	int n;
	cin >> n;
	if (isHappy(n))
		cout << "true";
	else
		cout << "false";
	return 0;
}

bool isHappy(int n)
{
	if (n == 4) {
		return false;
	}
	if (n == 1) {
		return true;
	}
	int t = n;
	int s = 0;
	while (t != 0) {
		int dv = t % 10;
		s += dv*dv;
		t = t / 10;
	}
	return isHappy(s);
}

