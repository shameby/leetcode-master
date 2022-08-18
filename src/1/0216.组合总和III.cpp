//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res = {};
    vector<int> tmp = {};
    void backtracking(int start, int sum, int n, int k) {
        if (sum > n) return;
        if (sum == n && tmp.size() == k) {
            res.emplace_back(tmp);
            return;
        }
        for (int i = start; i <= 9; i++) {
            tmp.emplace_back(i);
            backtracking(i+1, sum+i, n, k);
            tmp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(1, 0, n, k);
        return res;
    }
};

int main() {
    Solution slt;
    auto vec = slt.combinationSum3(3, 9);
    printDoubleVec(vec);
}