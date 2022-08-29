//
// Created by randy on 2022/8/29.
//

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int carry = -prices[0];
        int not_carry = 0;
        for (int i = 0; i < prices.size(); i++) {
            int t0(carry), t1(not_carry);
            carry = max(t0, t1-prices[i]);
            not_carry = max(t1, t0+prices[i]-fee);
        }
        return not_carry;
    }
};

int main() {
    Solution slt;

    vector<int> nums = {1,3,2,8,4,9};
    auto res = slt.maxProfit(nums, 2);
    printInt(res);
}