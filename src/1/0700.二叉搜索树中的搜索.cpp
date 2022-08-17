//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (val == root->val) return root;
        if (val < root->val && root->left != nullptr) return searchBST(root->left, val);
        if (val > root->val && root->right != nullptr) return searchBST(root->right, val);
        return nullptr;
    }
};