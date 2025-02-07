//
// Created by randy on 2022/8/25.
//

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for (int i = 0; i <= target; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i - nums[j] >= 0 && dp[i] < INT32_MAX - dp[i - nums[j]]) {
                    dp[i] += dp[i - nums[j]];
                }
            }
        }
        return dp[target];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,2,3};
    auto res = slt.combinationSum4(nums, 4);
    printInt(res);
}