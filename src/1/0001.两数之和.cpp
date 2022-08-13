//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m = {};
        for (int i = 0; i < nums.size(); i++) {
            auto iter = m.find(nums[i]);
            if (iter != m.end()) {
                return {i, m[nums[i]]};
            }
            m[target-nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution slt;
    vector<int> vec = {2,7,11,15};
    auto res = slt.twoSum(vec, 18);
    printVec(res);
}

