//
// Created by randy on 2022/8/15.
//

// 递归
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec = {};
        traversal(root, vec);
        return vec;
    }
    void traversal(TreeNode* node, vector<int>& vec) {
        if (node != nullptr) {
            vec.push_back(node->val);
            traversal(node->left, vec);
            traversal(node->right, vec);
        }
    }
};

// 迭代
class Solution2 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk = {};
        vector<int> res = {};
        if (root == nullptr) return res;
        stk.push(root);
        while (!stk.empty()) {
            auto node = stk.top();
            stk.pop();
            res.push_back(node->val);
            if (node->right != nullptr) stk.push(node->right);
            if (node->left != nullptr) stk.push(node->left);
        }
        return res;
    }
};