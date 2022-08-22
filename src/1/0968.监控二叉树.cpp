//
// Created by randy on 2022/8/22.
//

class Solution {
private:
    int res;
private:
    // 0 没有监控覆盖
    // 1 有监控
    // 2 有监控覆盖
    int traversal(TreeNode* node) {
        if (node == nullptr) return 2;
        int left = traversal(node->left);
        int right = traversal(node->right);
        if (left == 2 && right == 2) return 0;
        if (left == 0 || right == 0) {
            res++;
            return 1;
        }
        if (left == 1 || right == 1) return 2;
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) {
        res = 0;
        if (traversal(root) == 0) res++;
        return res;
    }
};