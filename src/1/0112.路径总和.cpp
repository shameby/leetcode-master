//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        int sum = 0;
        return traversal(root, targetSum, sum);
    }

    bool traversal(TreeNode* node, int targetSum, int& sum) {
        if (node != nullptr) {
            sum += node->val;
            if (node->left == nullptr && node->right == nullptr) return sum == targetSum;
            if (node->left != nullptr) {
                if (traversal(node->left, targetSum, sum)) return true;
                sum -= node->left->val;
            }
            if (node->right != nullptr) {
                if (traversal(node->right, targetSum, sum)) return true;
                sum -= node->right->val;
            }
        }
        return false;
    }
};