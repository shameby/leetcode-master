//
// Created by randy on 2022/8/26.
//

class Solution {
public:
    int rob(TreeNode* root) {
        auto res = robTree(root);
        return max(res[0], res[1]);
    }

    vector<int> robTree(TreeNode* node) {
        if (node == nullptr) return {0, 0};
        auto left = robTree(node->left);
        auto right = robTree(node->right);
        return {max(left[0],left[1]) + max(right[0], right[1]), node->val+left[0]+right[0]};
    }
};