#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string removeDuplicates(string str) {
    unordered_map<char, int> char_count;
    for (char ch : str) {
        ++char_count[ch];
    }
    string kq;
    for (char ch : str) {
        if (char_count[ch] == 1) {
            kq += ch;
        }
    }
    return kq;
}

int main() {
    string str = "nguyenduyle";
    string result = removeDuplicates(str);

    cout << "Original string: " << str << endl;
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
