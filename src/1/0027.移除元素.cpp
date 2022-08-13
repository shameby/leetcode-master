//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int idx = 0;
        while (idx < len) {
            if (nums[idx] == val) {
                int tmp = nums[len-1];
                nums[len-1] = nums[idx];
                nums[idx] = tmp;
                len--;
            } else {
                idx++;
            }
        }
        return len;
    }
};

int main() {
    Solution s;
    vector<int> list = {0,1,2,2,3,0,4,2};
    auto res = s.removeElement(list, 2);
    cout << res << endl;
}