//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res;
    vector<int> tmp;
    unordered_map<int, bool> used = {};

    void backTracking(vector<int>& nums, int start) {
        res.push_back(tmp);
        if (start == nums.size()) return;
        for (int i = start; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1] && !used[nums[i-1]]) continue;
            used[nums[i]] = true;
            tmp.push_back(nums[i]);
            backTracking(nums, i+1);
            tmp.pop_back();
            used[nums[i]] = false;
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backTracking(nums, 0);
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> a = {1,2,2};
    auto vec = slt.subsetsWithDup(a);
    printDoubleVec(vec);
}