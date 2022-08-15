//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec = {};
        traversal(root, vec);
        return vec;
    }

    void traversal(TreeNode* node, vector<int>& vec) {
        if (node != nullptr) {
            traversal(node->left, vec);
            vec.push_back(node->val);
            traversal(node->right, vec);
        }
    }
};

class Solution2 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk = {};
        vector<int> res = {};
        TreeNode* curr = root;
        while(curr != nullptr || !stk.empty()) {
            while (curr != nullptr) {
                stk.push(curr);
                curr = curr->left;
            }
            curr = stk.top();
            stk.pop();
            res.push_back(curr->val);
            curr = curr->right;
        }
        return res;
    }
};