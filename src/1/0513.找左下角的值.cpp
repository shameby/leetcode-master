//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if (root == nullptr) return 0;
        queue<TreeNode*> q = {};
        q.push(root);
        int lastLeft = root->val;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                if (i == 0) lastLeft = curr->val;
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
        }
        return lastLeft;
    }
};
