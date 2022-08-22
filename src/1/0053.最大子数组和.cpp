//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int sum = 0;
        for (int num : nums) {
            sum += num;
            if (sum > result) result = sum;
            if (sum < 0) sum = 0;
        }
        return result;
    }
};

int main() {
    vector<int> g = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> s = {1,1};
    Solution slt;
    printInt(slt.maxSubArray(g));
}