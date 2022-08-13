//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l(0), r(nums.size()-1), k(nums.size()-1);
        vector<int> res(nums.size(), 0);
        while (l <= r) {
            if (nums[l] * nums[l] < nums[r] * nums[r]) {
                res[k--] = nums[r] * nums[r];
                r--;
            } else {
                res[k--] = nums[l] * nums[l];
                l++;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> list = {-7,-3,-2, -1, 2, 4};
    auto res = s.sortedSquares(list);
    printVec(res);
}

