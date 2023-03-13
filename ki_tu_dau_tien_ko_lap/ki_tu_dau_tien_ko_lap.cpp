#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int find_kitu(string s);

int main()
{
	string s;
	cin >> s;
	cout << find_kitu(s);
	return 0;
}

int find_kitu(string s)
{
	unordered_map<char, int> my_map;
	for (char c : s) {
		++my_map[c];
	}
	for (int i = 0; i < s.size();++i) {
		if (my_map[s[i]] == 1) {
			return i;
		}
	}
	return -1;
}