//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    int getMinimumDifference(TreeNode *root) {
        int minDif = INT32_MAX;
        getMinimum(root, minDif);
        return minDif;
    }

    void getMinimum(TreeNode *node, int &minDif) {
        if (node == nullptr) return;
        auto left = node->left;
        while (left != nullptr) {
            minDif = min(minDif, node->val - left->val);
            left = left->right;
        }
        auto right = node->right;
        while (right != nullptr) {
            minDif = min(minDif, right->val - node->val);
            right = right->left;
        }
        getMinimum(node->left, minDif);
        getMinimum(node->right, minDif);
    }
};