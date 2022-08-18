//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res = {};
    vector<int> comb = {};
    unordered_map<int, bool> used = {};

    void combine(vector<int>& candidates, int target, int sum, int idx) {
        if (sum > target) return;
        if (sum == target) {
            res.push_back(comb);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > 0 && candidates[i] == candidates[i-1] && !used[candidates[i-1]]) continue;
            used[candidates[i]] = true;
            comb.push_back(candidates[i]);
            combine(candidates, target, sum+candidates[i], i+1);
            comb.pop_back();
            used[candidates[i]] = false;
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        combine(candidates, target, 0, 0);
        return res;
    }
};