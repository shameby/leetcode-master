//
// Created by randy on 2022/8/15.
//

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    if (root == nullptr) return {};
    vector<vector<int>> res = {};
    queue<TreeNode*> q = {};
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> vec = {};
        for (int i = 0; i < size; i++) {
            auto curr = q.front();
            q.pop();
            vec.push_back(curr->val);
            if (curr->left != nullptr) q.push(curr->left);
            if (curr->right != nullptr) q.push(curr->right);
        }
        res.push_back(vec);
    }
    reverse(res.begin(), res.end());
    return res;
}