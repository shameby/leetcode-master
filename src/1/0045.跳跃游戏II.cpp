//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int curr_far = 0;
        int cnt = 0;
        int nex_far = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            nex_far = max(i+nums[i], nex_far);
            if (nex_far >= nums.size() - 1) return cnt+1;
            if (i == curr_far) {
                curr_far = nex_far;
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> g = {2, 3, 1, 1, 4};
    Solution slt;
    printInt(slt.jump(g));
}
