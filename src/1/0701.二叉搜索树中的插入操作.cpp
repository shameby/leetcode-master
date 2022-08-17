//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr) return new TreeNode(val);
        insertInto(root, val);
        return root;
    }

    void insertInto(TreeNode* root, int val) {
        if (val < root->val) {
            if (root->left == nullptr) {
                root->left = new TreeNode(val);
                return;
            } else {
                return insertInto(root->left, val);
            }
        } else {
            if (root->right == nullptr) {
                root->right = new TreeNode(val);
                return;
            } else {
                return insertInto(root->right, val);
            }
        }
    }
};

int main() {
    auto n1 = new TreeNode(2);
    auto n2 = new TreeNode(1);
    auto n3 = new TreeNode(3);
    n1->left = n2;
    n1->right = n3;
    Solution slt;
    slt.insertIntoBST(n1, 4);
}