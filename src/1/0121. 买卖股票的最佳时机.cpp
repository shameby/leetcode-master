//
// Created by randy on 2022/8/29.
//


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int carry = -prices[0];
        int not_carry = 0;
        for (int i = 1; i < prices.size(); i++) {
            int tmp_c = carry;
            int tmp_nc = not_carry;
            carry = max(tmp_c, -prices[i]);
            not_carry = max(not_carry, tmp_c+prices[i]);
        }
        return max(carry, not_carry);
    }
};

int main() {
    Solution slt;

    vector<int> nums = {7,1,5,3,6,4};
    auto res = slt.maxProfit(nums);
    printInt(res);
}