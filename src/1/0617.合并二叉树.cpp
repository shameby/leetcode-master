//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 != nullptr && root2 != nullptr) {
            mergeTree(root1, root2);
            return root1;
        }
        if (root1 != nullptr) {
            return root1;
        }
        if (root2 != nullptr) {
            return root2;
        }
        return nullptr;
    }

    void mergeTree(TreeNode* node1, TreeNode* node2) {
        node1->val += node2->val;
        if (node1->left != nullptr && node2->left != nullptr) {
            mergeTree(node1->left, node2->left);
        }
        if (node1->right != nullptr && node2->right != nullptr) {
            mergeTree(node1->right, node2->right);
        }
        if (node1->left == nullptr && node2->left != nullptr) {
            node1->left= node2->left;
        }
        if (node1->right == nullptr && node2->right != nullptr) {
            node1->right= node2->right;
        }
    }
};

