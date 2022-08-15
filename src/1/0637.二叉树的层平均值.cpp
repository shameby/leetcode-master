//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res = {};
        if (root == nullptr) return res;
        queue<TreeNode*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            double sum = 0;
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                sum += curr->val;
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
            res.push_back(sum / size);
        }
        return res;
    }
};