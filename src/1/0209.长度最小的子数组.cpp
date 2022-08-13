//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int minLen = INT32_MAX;
        int l(0), sum(0);
        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            while (sum >= target) {
                minLen = min(minLen, r - l + 1);
                sum -= nums[l++];
            }
        }
        return minLen == INT32_MAX ? 0: minLen;
    }
};

int main() {
    Solution s;
    vector<int> list = {1, 1, 1, 1, 1, 1, 1, 1};
    auto res = s.minSubArrayLen(11, list);
    printInt(res);
}

