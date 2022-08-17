//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res = {};
        if (root == nullptr) return res;
        vector<int> path = {};
        genPath(root, path, res);
        return res;
    }

    void genPath(TreeNode* node, vector<int>& path, vector<string>& res) {
        path.push_back(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            string str;
            for (int i = 0; i < path.size()-1; i++) {
                str += to_string(path[i]);
                str += "->";
            }
            str += to_string(path[path.size()-1]);
            res.push_back(str);
        }
        if (node->left != nullptr) {
            genPath(node->left, path, res);
            path.pop_back();
        }
        if (node->right != nullptr) {
            genPath(node->right, path, res);
            path.pop_back();
        }
    }
};