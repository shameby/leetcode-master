//
// Created by randy on 2022/8/11.

#include <vector>
#include <stack>
#include <string>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        postOrder(root);
        return root;
    }
    void postOrder(TreeNode* node) {
        if (node != nullptr) {
            convertBST(node->right);
            node->val += sum;
            sum = node->val;
            convertBST(node->left);
        }
    }
};

int main() {
    /*auto n1 = new TreeNode(2);
    auto n2 = new TreeNode(1);
    auto n3 = new TreeNode(3);
    n1->left = n2;
    n1->right = n3;
    Solution slt;
    slt.trimBST(n1, 1, 2);*/
}

