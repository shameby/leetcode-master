//
// Created by randy on 2022/8/24.
//

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        // printDoubleVec(dp);
        for (auto str: strs) {
            int oneCnt(0), zeroCnt(0);
            for (auto c: str) {
                if (c == '0') zeroCnt++;
                else oneCnt++;
            }
            for (int i = m; i >= zeroCnt; i--) {
                for (int j = n; j >= oneCnt; j--) {
                    dp[i][j] = max(dp[i][j], dp[i-zeroCnt][j-oneCnt] + 1);
                }
            }
            //printDoubleVec(dp);
        }
        return dp[m][n];
    }
};

int main() {
    Solution slt;

    vector<string> nums = {"10", "0001", "111001", "1", "0"};
    auto res = slt.findMaxForm(nums, 5, 3);
    printInt(res);
}

