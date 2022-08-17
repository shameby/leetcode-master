//
// Created by randy on 2022/8/11.

#include <vector>
#include <queue>
#include <string>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums, 0, nums.size());
    }

    TreeNode* construct(vector<int>& nums, int left, int right) {
        // cout << left << ":" << right << endl;
        if (left == right) return nullptr;
        if (left + 1 == right) return new TreeNode(nums[left]);
        int maxIdx = left;
        for (int i = left; i < right; i++) {
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }
        auto node = new TreeNode(nums[maxIdx]);
        node->left = construct(nums, left, maxIdx);
        node->right = construct(nums, maxIdx+1, right);
        return node;
    }
};

int main() {
    vector<int> order = {3,2,1,6,0,5};
    Solution slt;
    slt.constructMaximumBinaryTree(order);
}

