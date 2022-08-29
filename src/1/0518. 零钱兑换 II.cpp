//
// Created by randy on 2022/8/25.
//

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1, 0);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++) {
            cout << coins[i] << endl;
            for (int j = coins[i]; j <= amount; j++) {
                dp[j] += dp[j - coins[i]];
                printVec(dp);
            }
            cout << "--------------------------------" << endl;
        }
        return dp[amount];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,2,5};
    auto res = slt.change(5, nums);
    printInt(res);
}
