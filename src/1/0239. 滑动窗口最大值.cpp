//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res = {};
        deque<int> dq = {};
        for (int i = 0; i < k; i++) {
            while (!dq.empty() && nums[i] > dq.back()) {
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        res.push_back(dq.front());
        for (int j = k; j < nums.size(); j++) {
            if (nums[j-k] == dq.front()) {
                dq.pop_front();
            }
            while (!dq.empty() && nums[j] > dq.back()) {
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            res.push_back(dq.front());
        }
        return res;
    }
};