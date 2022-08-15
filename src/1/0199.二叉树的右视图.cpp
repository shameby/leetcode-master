//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res = {};
        if (root == nullptr) return res;
        queue<TreeNode*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                if (i == size - 1) {
                    res.push_back(curr->val);
                }
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
        }
        return res;
    }
};