#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> my_set;
    for (int c : nums1) {
        my_set.insert(c);
    }
    vector<int> kq;
    for (int key : my_set) {
        if (find(nums2.begin(), nums2.end(), key) != nums2.end()) {
            kq.push_back(key);
        }
    }
    return kq;
}

int main() {
    vector<int> nums1 = { 1, 2, 3, 4, 5 };
    vector<int> nums2 = { 3, 4, 5, 6, 7 };

    vector<int> commonElements = intersection(nums1, nums2);

    cout << "Common elements: ";
    for (int i = 0; i < commonElements.size(); i++) {
        cout << commonElements[i] << " ";
    }

    return 0;
}
