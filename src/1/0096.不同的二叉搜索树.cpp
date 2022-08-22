//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int numTrees(int n) {
        if (n == 1) return 1;
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                dp[i] += dp[j] * dp[i-j-1];
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
    auto res = slt.numTrees(3);
    printInt(res);
}