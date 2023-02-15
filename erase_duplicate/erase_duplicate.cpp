#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string erase_dup(string s);

int main()
{
	string s;
	cin >> s;
	cout << erase_dup(s);
	return 0;
}

string erase_dup(string s)
{
	if (s.size() == 1) {
		return s;
	}
	sort(s.begin(), s.end());
	int i = 0;
	int dem = 1;
	while (i < s.size() - 1) {
		if (s[i] == s[i + 1]) {
			dem++;
		}
		if (s[i] != s[i + 1] && dem >= 2) {
			s.erase(i - dem + 1, dem);
			i = i - dem;
			dem = 1;
		}
		++i;
	}
	i--;
	if (s[i] == s[i + 1] && dem >= 2) {
		s.erase(i - dem + 2, dem);
	}
	return s;
}