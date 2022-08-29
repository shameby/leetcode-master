//
// Created by randy on 2022/8/25.
//

class Solution {
public:
    int rob(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (i == 1) {nums[1] = max(nums[0], nums[1]); continue;}
            nums[i] = max(nums[i-1], nums[i-2]+nums[i]);
        }
        return nums.back();
    }
};

int main() {
    Solution slt;

    vector<int> nums = {2,7,9,3,1};
    auto res = slt.rob(nums);
    printInt(res);
}
