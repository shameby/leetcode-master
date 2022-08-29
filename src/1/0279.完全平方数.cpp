//
// Created by randy on 2022/8/25.
//

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, INT32_MAX-10);
        dp[0] = 0;
        for (int i = 0; i * i <= n; i++) {
            for (int j = i*i; j <= n; j++) {
                dp[j] = min(dp[j], dp[j - i*i] + 1);
            }
        }
        return dp[n];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,2,3};
    auto res = slt.numSquares(13);
    printInt(res);
}
