#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findSubstring(string s, vector<string>& words);
string xap_xep(vector<string>,vector<string>&);

int main()
{
	return 0;
}

vector<int> findSubstring(string s, vector<string>& words)
{

}

string xap_xep(vector<string> vec, vector<string>& kq)
{
	if (vec.size() == 1) {
		return vec[0];
	}
	
	for (int i = 0; i < vec.size();++i) {
		string s = vec[i];
		vector<string> temp = vec;
		auto ite = temp.begin();
		ite = temp.erase(ite+i);
		s+=xap_xep(temp,kq);
	}
}