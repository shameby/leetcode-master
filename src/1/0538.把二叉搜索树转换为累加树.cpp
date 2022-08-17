//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        postOrder(root);
        return root;
    }
    void postOrder(TreeNode* node) {
        if (node != nullptr) {
            convertBST(node->right);
            node->val += sum;
            sum = node->val;
            convertBST(node->left);
        }
    }
};