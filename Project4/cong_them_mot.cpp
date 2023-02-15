#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    string s;
    for (int c : digits) {
        s += to_string(c);
    }
    unsigned long long num = stoull(s);
    num++;
    string str = to_string(num);
    vector<int> vec;
    for (int i = 0; i < str.size();++i) {
        string temp(str, i, 1);
        int val = stoi(temp);
        vec.push_back(val);
    }
    return vec;
}

int main()
{
    vector<int> vec = { 7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6 };
    /*vector<int> kq = plusOne(vec);
    for (int c : kq) {
        cout << c << " ";
    }*/
    string s;
    for (int c : vec) {
        s += to_string(c);
    }
    cout << s << endl;
    //unsigned long long num = stoull(s);
    //cout << num;
    unsigned long long num = 7285091295366732843;
    return 0;
}