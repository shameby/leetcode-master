//
// Created by randy on 2022/8/17.
//

class Solution {
private:
    TreeNode* m_root = {};
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == nullptr) return nullptr;
        m_root = root;
        trim(root, nullptr, low, high);
        return m_root;
    }

    void trim(TreeNode* node, TreeNode *pre, int low, int high) {
        if (node == nullptr) return;
        if (node->val >= low && node->val <= high) {
            trim(node->left, node, low, high);
            trim(node->right, node, low, high);
        } else if (node->val < low) {
            auto right = node->right;
            if (pre != nullptr) {
                pre->left = right;
            }
            else {
                node->right = nullptr;
                m_root = right;
            }
            trim(right, pre, low, high);
        } else {
            auto left = node->left;
            if (pre != nullptr) {
                pre->right = left;
            }
            else {
                node->left = nullptr;
                m_root = left;
            }
            trim(left, pre, low, high);
        }
    }
};