#include <iostream>
#include <unordered_map>
#include <map>;
#include <string>
using namespace std;

void ki_tu_nhieu_nhat(const string&);

int main()
{
	string s;
	cin >> s;
	ki_tu_nhieu_nhat(s);
	return 0;
}

void ki_tu_nhieu_nhat(const string& s)
{
	unordered_map<char, int> my_map;
	for (char c : s) {
		++my_map[c];
	}
	int max = 0;
	for (auto pa : my_map) {
		if (pa.second > max) {
			max = pa.second;
		}
	}
	for (auto pa : my_map) {
		if (pa.second == max) {
			cout << pa.first;
		}
	}
}