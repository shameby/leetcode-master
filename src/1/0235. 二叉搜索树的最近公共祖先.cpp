//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val > q->val) {
            return lowestCommonAn(root, q, p);
        }
        return lowestCommonAn(root, p, q);
    }
    TreeNode* lowestCommonAn(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root->val >= p->val && root->val <= q->val) return root;
        else if (root->val > q->val) return lowestCommonAn(root->left, p, q);
        else return lowestCommonAn(root->right, p, q);
    }
};

int main() {
    auto n1 = new TreeNode(2);
    auto n2 = new TreeNode(1);
    auto n3 = new TreeNode(3);
    n1->left = n2;
    // n1->right = n3;
    Solution slt;
    slt.lowestCommonAncestor(n1, n1, n2);
}