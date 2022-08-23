//
// Created by randy on 2022/8/11.

#include <vector>
#include <stack>
#include <string>
#include <list>
#include <unordered_map>
#include <algorithm>
#include <map>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (auto num: nums) sum += num;
        if ((target + sum) % 2 == 1) return 0;
        if (abs(target) > sum) return 0;
        int bagSize = (target + sum) / 2;
        if (bagSize < 0) return 0;
        vector<int> dp(bagSize+1, 0);
        dp[0] = 1;
        for (int num : nums) {
            for (int j = bagSize; j >= num; j--) {
                dp[j] += dp[j-num];
            }
            // printVec(dp);
        }
        return dp[bagSize];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,1,1,1,1};
    auto res = slt.findTargetSumWays(nums, 3);
    printInt(res);
}

