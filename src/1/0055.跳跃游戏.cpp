//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    bool canJump(vector<int> &nums) {
        int far = 0;
        for (int i = 0; i < nums.size() && i <= far; i++) {
            if (i + nums[i] > far) far = i + nums[i];
            if (far >= nums.size() - 1) return true;
        }
        return false;
    }
};

int main() {
    vector<int> g = {2, 3, 1, 1, 4};
    Solution slt;
    printInt(slt.canJump(g));
}