//
// Created by randy on 2022/8/23.
//

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto num: nums) sum += num;
        if (sum % 2 == 1) return false;
        int target = sum / 2;
        vector<int> dp(target+1, 0);
        for (int num : nums) {
            for (int j = target; j >= num; j--) {
                dp[j] = max(dp[j], dp[j-num] + num);
            }
        }
        return dp[target] == target;
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,5,11,5};
    auto res = slt.canPartition(nums);
    printInt(res);
}