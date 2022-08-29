//
// Created by randy on 2022/8/29.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp = {-prices[0], 0, -prices[0], 0};
        for (int i = 1; i < prices.size(); i++) {
            int t0(dp[0]), t1(dp[1]), t2(dp[2]), t3(dp[3]);
            dp[0] = max(t0, -prices[i]);
            dp[1] = max(t1, t0+prices[i]);
            dp[2] = max(t2, t1-prices[i]);
            dp[3] = max(t3, t2+prices[i]);
        }
        return max(dp[1], dp[3]);
    }
};

int main() {
    Solution slt;

    vector<int> nums = {3,3,5,0,0,3,1,4};
    auto res = slt.maxProfit(nums);
    printInt(res);
}