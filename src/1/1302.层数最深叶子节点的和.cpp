//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int last_sum = 0;
        if (root == nullptr) return last_sum;
        queue<TreeNode*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            int sum = 0;
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                sum += curr->val;
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
            }
            last_sum = sum;
        }
        return last_sum;
    }
};

int main() {
    auto n1 = new TreeNode(2);
    auto n2 = new TreeNode(1);
    auto n3 = new TreeNode(3);
    n1->left = n2;
    n1->right = n3;
    Solution slt;
    slt.deepestLeavesSum(n1);
}