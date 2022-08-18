class Solution {
private:
    vector<vector<int>> res = {};
    vector<int> tmp = {};
    void backtracking(int start, int n, int k) {
        if (tmp.size() == k) {
            res.emplace_back(tmp);
            return;
        }
        for (int i = start; i <= n - (k - tmp.size()) + 1; i++) {
            tmp.push_back(i);
            backtracking(i+1, n, k);
            tmp.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        backtracking(1, n, k);
        return res;
    }
};

int main() {
    Solution slt;
    auto vec = slt.combine(4, 2);
    printDoubleVec(vec);
}

