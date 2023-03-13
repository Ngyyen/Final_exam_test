#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isPalindrome(string s);

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (isPalindrome(s)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}

bool isPalindrome(string s)
{
	string temp;
	auto ite = back_inserter(temp);
	copy(s.rbegin(), s.rend(), ite);
	if (temp == s) {
		return true;
	}
	return false;
}