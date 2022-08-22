//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a1(0), a2(0);
        for (int i = 2; i <= cost.size()-1; i++) {
            int res = min(a1+cost[i-2], a2+cost[i-1]);
            a1 = a2;
            a2 = res;
        }
        return min(a1 + cost[cost.size()-2], a2 + cost[cost.size()-1]);
    }
};

int main() {
    vector<int> fee = {1,100};
    Solution slt;
    auto res = slt.minCostClimbingStairs(fee);
    printInt(res);
}