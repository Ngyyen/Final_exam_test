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
	int i = 0;
	while (i < s.size()-1) {
		if(s.find(s[i], i + 1) != string::npos) {
			while (s.find(s[i], i+1) != string::npos) {
				s.erase(s.find(s[i], i + 1), 1);
				if (s.size() == 1) {
					return "";
				}
			}
			s.erase(i, 1);
			i--;
		}
		++i;
	}
	return s;
}