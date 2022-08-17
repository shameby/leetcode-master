//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;
        int sum = 0;
        order(root, sum, false);
        return sum;
    }

    void order(TreeNode* node, int& sum, bool isLeft) {
        if (node != nullptr) {
            if (node->left == nullptr && node->right == nullptr && isLeft) sum += node->val;
            order(node->left, sum, true);
            order(node->right, sum, false);
        }
    }
};