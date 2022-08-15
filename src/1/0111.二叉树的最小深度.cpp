//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<TreeNode*> q = {};
        q.push(root);
        int depth = 0;
        while (!q.empty()) {
            int size = q.size();
            depth++;
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
                if (curr->left == nullptr && curr->right == nullptr) return depth;
            }
        }
        return depth;
    }
};