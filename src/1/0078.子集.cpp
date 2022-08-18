//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<int>> res;
    vector<int> tmp;

    void backTracking(vector<int>& nums, int start) {
        res.push_back(tmp);
        if (start == nums.size()) return;
        for (int i = start; i < nums.size(); i++) {
            tmp.push_back(nums[i]);
            backTracking(nums, i+1);
            tmp.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        backTracking(nums, 0);
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> a = {1,2,3};
    auto vec = slt.subsets(a);
    printDoubleVec(vec);
}

