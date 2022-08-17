//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        return isValid(root->left, INT64_MIN, root->val) && isValid(root->right, root->val, INT64_MAX);
    }

    bool isValid(TreeNode* node, int64_t l, int64_t r) {
        // cout << l << ":" << r << endl;
        if (node == nullptr) return true;
        if (node->val <= l || node->val >= r) return false;
        return isValid(node->left, l, node->val) && isValid(node->right, node->val, r);
    }
};