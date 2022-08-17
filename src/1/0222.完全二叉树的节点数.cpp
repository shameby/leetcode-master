//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        auto left = root->left;
        auto right = root->right;
        int leftH = 0;
        int rightH = 0;
        while (left != nullptr) {
            leftH++;
            left = left->left;
        }
        while (right != nullptr) {
            rightH++;
            right = right->right;
        }
        if (leftH == rightH) return (2 << leftH) - 1;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
