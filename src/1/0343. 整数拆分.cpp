//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1, 0);
        dp[2] = 1;
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j < i - 1;j++) {
                dp[i] = max(dp[i], max(dp[i-j]*j, (i-j)*j));
            }
        }
        return dp[n];
    }
};

int main() {
    vector<vector<int>> obstacleGrid = {
            {0, 0},
            {1, 1},
            {0, 0}
    };
    Solution slt;
    auto res = slt.integerBreak(10);
    printInt(res);
}