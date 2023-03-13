#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

string xen_ke(string ,string);

int main()
{
	string a, b;
	cin >> a >> b;
	cout << xen_ke(a,b);
	return 0;
}

string xen_ke(string a, string b)
{
	int n = (a.size() < b.size() ? a.size() : b.size());
	string kq;
	int i;
	for (i = 0; i < n; ++i) {
		string s1(a, i, 1), s2(b, i, 1);
		kq += s1 + s2;
	}
	string s1(a, n), s2(b, n);
	kq += s1 + s2;
	return kq;
}