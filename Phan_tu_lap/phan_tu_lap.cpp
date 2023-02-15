#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k);

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    vector<int> vec2 = { 1,2,3,1,2,3 };
    
    if (containsNearbyDuplicate(vec, k))
        cout <<"true";
    else
        cout <<"false";
    return 0;
}

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    map<int, vector<int>> my_map;
    int size = nums.size();
    for (int i = 0; i < size; ++i) {
        my_map[nums[i]].push_back(i);
    }
    for (const auto &pa : my_map) {
        if (pa.second.size() >= 2) {
            auto ite = pa.second.begin(), end = pa.second.end();
            while (ite != end-1) {
                if ((*(ite + 1) - *ite) <= k) {
                    return true;
                }
                ++ite;
            }
        }
    }
    return false;
}
