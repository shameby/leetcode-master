//
// Created by randy on 2022/8/29.
//


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int noHoldSold(0), noHoldNoSold(0), hold(-prices[0]);
        for (int i = 1; i < prices.size(); i++) {
            int t0(noHoldSold), t1(noHoldNoSold), t2(hold);
            noHoldSold = t2+prices[i];
            noHoldNoSold = max(t0, t1);
            hold = max(hold, t1-prices[i]);
        }
        return max(noHoldNoSold, noHoldSold);
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,2,3,0,2};
    auto res = slt.maxProfit(nums);
    printInt(res);
}