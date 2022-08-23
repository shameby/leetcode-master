//
// Created by randy on 2022/8/23.
//

class Solution {
public:
    int lastStoneWeightII(vector<int> &stones) {
        int sum = 0;
        for (auto stone: stones) {
            sum += stone;
        }
        int target = sum / 2;
        vector<int> dp(target + 1, 0);
        for (int stone : stones) {
            for (int j = target; j >= stone; j--) {
                dp[j] = max(dp[j], dp[j - stone] + stone);
            }
            printVec(dp);
        }
        return sum - dp[target] - dp[target];
    }
};

int main() {
    Solution slt;

    vector<int> nums = {2, 7, 4, 1, 8, 1};
    auto res = slt.lastStoneWeightII(nums);
    printInt(res);
}