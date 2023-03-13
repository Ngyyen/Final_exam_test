#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int s = 0;
	if (a >= b) {
		s = b + (a - b) / 3;
	}
	else {
		s = a;
	}
	cout << s + c;
	return 0;
}