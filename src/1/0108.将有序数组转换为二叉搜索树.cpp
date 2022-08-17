//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return gen(nums, 0, nums.size());
    }

    TreeNode* gen(vector<int>& nums, int l, int r) {
        if (l == r) return nullptr;
        if (l + 1 == r) return new TreeNode(nums[l]);
        int mid = l + (r - l) / 2;
        auto node = new TreeNode(nums[mid]);
        node->left = gen(nums, l, mid);
        node->right = gen(nums, mid+1, r);
        return node;
    }
};