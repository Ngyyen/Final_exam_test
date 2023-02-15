#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool isUgly(int n);
bool is_prime(int n);
int find_factor(int n);

int main()
{
	int n;
	cin >> n;
	if (isUgly(n))
		cout << "true";
	else
		cout << "false";
	return 0;
}

bool isUgly(int n)
{
	if (n==1||n==2||n==3||n==5) {
		return true;
	}
	if (is_prime(n)) {
		return false;
	}
	int val = find_factor(n);
	if (val != 2 && val != 3 && val != 5) {
		return false;
	}
	int temp = n / val;
	return isUgly(temp);

}
int find_factor(int n)
{
	for (int i = 2; i <= n/2; ++i) {
		if (n % i == 0 && is_prime(i)) {
			return i;
		}
	}
	return -1;
}
bool is_prime(int n)
{
	if (n == 1) {
		return false;
	}
	for (long i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}