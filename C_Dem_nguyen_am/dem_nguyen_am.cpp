#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool kt_nguyen_am(char);
int dem_nguyen_am(const string&);

int main()
{
    string s;
    cin >> s;
    int kq = dem_nguyen_am(s);
    cout << kq;
	return 0;
}

int dem_nguyen_am(const string& s)
{
    int dem = 0;
    for (char ch : s) {
        if (kt_nguyen_am(ch)) {
            ++dem;
        }
    }
    return dem;
}
bool kt_nguyen_am(char x)
{
    vector<char> vec = { 'u','U','e','E','o','O','a','A','i','I' };
    for (char ch : vec) {
        if (x == ch) {
            return true;
        }
    }
    return false;
}