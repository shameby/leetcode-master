//
// Created by randy on 2022/8/29.
//

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (prices.empty() || k == 0) return 0;
        vector<int> dp(2*k, 0);
        for (int i = 0; i < 2*k; i += 2) {
            dp[i] = -prices[0];
        }
        for (int i = 1; i < prices.size(); i++) {
            vector<int> tmp(dp.begin(), dp.end());
            dp[0] = max(tmp[0], -prices[i]);
            for (int j = 1; j < 2*k; j++) {
                if (j % 2 == 1) dp[j] = max(tmp[j], tmp[j-1]+prices[i]);
                else dp[j] = max(tmp[j], tmp[j-1]-prices[i]);
            }
        }
        return dp[2*k-1];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {3,2,6,5,0,3};
    auto res = slt.maxProfit(2,nums);
    printInt(res);
}