//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }

    void invert(TreeNode* node) {
        if (node != nullptr) {
            swap(node->left, node->right);
            invert(node->left);
            invert(node->right);
        }
    }
};