#include <iostream>
#include <unordered_map>
#include <map>;
#include <string>
using namespace std;

vector<char> ki_tu_nhieu_nhat(const string&);

int main()
{
	string s;
	cin >> s;
	vector<char> vec = ki_tu_nhieu_nhat(s);
	for (char c : vec) {
		cout << c << " ";
	}
	return 0;
}

vector<char> ki_tu_nhieu_nhat(const string& s)
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
	vector<char> vec;
	for (char c : s) {
		if (my_map[c] == max && find(vec.begin(), vec.end(), c) == vec.end()) {
			vec.push_back(c);
		}
	}
	return vec;
}