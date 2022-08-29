//
// Created by randy on 2022/8/25.
//

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        return max(robRange(nums, 0, nums.size()-2), robRange(nums, 1, nums.size()-1));
    }

    int robRange(vector<int>& nums, int start, int end) {
        if (start == end) return nums[start];
        vector<int> dp(nums.size(), 0);
        dp[start] = nums[start];
        dp[start+1] = max(nums[start], nums[start+1]);
        for (int i = start + 2; i <= end; i++) {
            dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[end];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {2,7,9,3,1};
    auto res = slt.rob(nums);
    printInt(res);
}