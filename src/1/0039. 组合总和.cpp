//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res = {};
    vector<int> comb = {};

    void combine(vector<int>& candidates, int target, int sum, int idx) {
        if (sum > target) return;
        if (sum == target) {
            res.push_back(comb);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            comb.push_back(candidates[i]);
            combine(candidates, target, sum+candidates[i], i);
            comb.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        combine(candidates, target, 0, 0);
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> a = {2,3,6,7};
    auto vec = slt.combinationSum(a, 7);
    printDoubleVec(vec);
}