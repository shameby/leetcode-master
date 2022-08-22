//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    static bool compare(int a, int b) {
        return abs(a) > abs(b);
    }
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), compare);
        for (auto& num : nums) {
            if (num <= 0) {
                num = -num;
                k--;
                if (k == 0) break;
            }
        }
        if (k > 0 && k % 2 == 1) {
            nums[nums.size()-1] = -nums[nums.size()-1];
        }
        int sum = 0;
        for (auto num : nums) {
            sum += num;
        }
        return sum;
    }
};

int main() {
    vector<int> g = {2,-3,-1,5,-4};
    Solution slt;
    printInt(slt.largestSumAfterKNegations(g, 3));
}