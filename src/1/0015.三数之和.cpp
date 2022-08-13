//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3) {
            return {};
        }
        vector<vector<int>> res = {};
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] > 0) {
                return res;
            }
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int j(i+1), k(nums.size()-1);
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                } else if (sum > 0) {
                    k--;
                    while (j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                } else {
                    j++;
                    while (j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                }
            }
        }
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> v = {0,0,0};
    auto res = slt.threeSum(v);
    printDoubleVec(res);
}

