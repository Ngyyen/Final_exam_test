#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool kt_9(const vector<int>&);
vector<int> plusOne(vector<int>&);

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    vector<int> vec2 = {9,9,9,9,9};
    vector<int> kq = plusOne(vec);
    for (int c : kq) {
        cout << c << " ";
    }
    
    return 0;
}

bool kt_9(const vector<int>& digits)
{
    for (int c : digits) {
        if (c != 9) {
            return false;
        }
    }
    return true;
}
vector<int> plusOne(vector<int>& digits) {
    long size = digits.size();
    if (digits[size - 1] != 9) {
        digits[size - 1]++;
        return digits;
    }
    if (kt_9(digits)) {
        vector<int> vec = { 1 };
        for (int i = 1; i <= size; ++i) {
            vec.push_back(0);
        }
        return vec;
    }
    int i = 1;
    do {
        digits[size - i] = 0;
        i++;
        digits[size - i]++;
    } while (digits[size - i] == 10);
    return digits;
}