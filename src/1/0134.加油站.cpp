//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum_cur = 0;
        int sum_total = 0;
        int start = 0;
        for (int i = 0; i < gas.size(); i++) {
            sum_total += gas[i] - cost[i];
            sum_cur += gas[i] - cost[i];
            if (sum_cur < 0) {
                start = i+1;
                sum_cur = 0;
            }
        }
        if (sum_total < 0) return -1;
        return start;
    }
};

int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    Solution slt;
    printInt(slt.canCompleteCircuit(gas, cost));
}

