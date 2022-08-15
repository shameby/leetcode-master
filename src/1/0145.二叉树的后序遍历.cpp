//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec = {};
        traversal(root, vec);
        return vec;
    }
    void traversal(TreeNode* node, vector<int>& vec) {
        if (node != nullptr) {
            traversal(node->left, vec);
            traversal(node->right, vec);
            vec.push_back(node->val);
        }
    }
};

class Solution2 {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        vector<int> res = {};
        stack<TreeNode*> stk = {};
        stk.push(root);
        while (!stk.empty()) {
            auto curr = stk.top();
            stk.pop();
            res.push_back(curr->val);
            if (curr->left != nullptr) stk.push(curr->left);
            if (curr->right != nullptr) stk.push(curr->right);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};