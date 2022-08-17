//
// Created by randy on 2022/8/17.
//

class Solution {
private:
    TreeNode* m_root = {};
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;
        m_root = root;
        deleteN(root, nullptr, key);
        return m_root;
    }

    void deleteN(TreeNode* node, TreeNode* pre, int key) {
        if (node == nullptr) return;
        if (node->val == key) {
            if (node->left == nullptr && node->right == nullptr) node = nullptr;
            else if (node->left != nullptr && node->right == nullptr) {
                auto left = node->left;
                node->left = nullptr;
                node = left;
            }
            else if (node->left == nullptr && node->right != nullptr) {
                auto right = node->right;
                node->right = nullptr;
                node = right;
            } else {
                auto left = node->left;
                auto right = node->right;
                node->left = nullptr;
                node->right = nullptr;
                node = right;
                while (right->left != nullptr) {
                    right = right->left;
                }
                right->left = left;
            }
            if (pre != nullptr) {
                if (pre->val > key) {
                    pre->left = node;
                } else {
                    pre->right = node;
                }
            } else {
                m_root = node;
            }
        } else if (node->val < key) {
            deleteN(node->right, node, key);
        } else {
            deleteN(node->left, node, key);
        }
    }
};