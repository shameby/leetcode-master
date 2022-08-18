//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res;
    vector<int> tmp;

    void backTracking(vector<int>& nums, int start) {
        if (tmp.size() >= 2) res.push_back(tmp);
        if (start == nums.size()) return;
        unordered_map<int, bool> used = {};
        for (int i = start; i < nums.size(); i++) {
            if (tmp.empty() || nums[i] >= tmp.back()) {
                if (used[nums[i]]) continue;
                used[nums[i]] = true;
                tmp.push_back(nums[i]);
                backTracking(nums, i+1);
                tmp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backTracking(nums, 0);
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> a = {1,2,3,4,5,6,7,8,9,10,1,1,1,1,1};
    auto vec = slt.findSubsequences(a);
    printDoubleVec(vec);
}

