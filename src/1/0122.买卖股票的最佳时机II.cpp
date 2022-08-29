//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        int sum = 0;
        for (int i = 1; i < prices.size(); i++) {
            int diff = prices[i] - prices[i-1];
            if (diff > 0 ) sum += diff;
        }
        return sum;
    }
};

class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int carry = -prices[0];
        int not_carry = 0;
        for (int i = 1; i < prices.size(); i++) {
            int tmp_c = carry;
            int tmp_nc = not_carry;
            carry = max(tmp_c, tmp_nc-prices[i]);
            not_carry = max(not_carry, tmp_c+prices[i]);
        }
        return max(carry, not_carry);
    }
};

int main() {
    vector<int> g = {7,1,5,3,6,4};
    Solution slt;
}