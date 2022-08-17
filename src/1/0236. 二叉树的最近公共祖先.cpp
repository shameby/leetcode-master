//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q) return root;
        auto left = lowestCommonAncestor(root->left, p, q);
        auto right = lowestCommonAncestor(root->right, p, q);
        if (left != nullptr && right != nullptr) return root;
        if (left == nullptr && right != nullptr) return right;
        else if (left != nullptr) return left;
        else {
            return nullptr;
        }
    }
};

int main() {
    auto n1 = new TreeNode(1);
    auto n2 = new TreeNode(2);
    auto n3 = new TreeNode(1);
    n1->left = n2;
    n1->right = n3;
    Solution slt;
    slt.lowestCommonAncestor(n1, n2, n3);
}