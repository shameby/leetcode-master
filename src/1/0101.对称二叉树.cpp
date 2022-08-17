//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return compare(root->left, root->right);
    }

    bool compare(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) return true;
        if (left == nullptr && right != nullptr) return false;
        if (left != nullptr && right == nullptr) return false;
        if (left->val != right->val) return false;
        return compare(left->left, right->right) && compare(left->right, right->left);
    }
};