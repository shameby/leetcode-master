//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res = {};
        if (root == nullptr) return res;
        queue<TreeNode*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            int max_n = INT32_MIN;
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                max_n = max(max_n, curr->val);
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
            res.push_back(max_n);
        }
        return res;
    }
};