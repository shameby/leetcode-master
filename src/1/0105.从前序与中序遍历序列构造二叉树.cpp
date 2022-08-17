//
// Created by randy on 2022/8/11.

#include <vector>
#include <queue>
#include <string>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size(), 0, inorder.size());
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int preLeft, int preRight, int inLeft, int inRight) {
        cout << preLeft << "," << preRight << ";" << inLeft << "," << inRight << endl;
        if (inLeft == inRight) return nullptr;
        if (inLeft+1 == inRight) return new TreeNode(inorder[inLeft]);
        auto node = new TreeNode(preorder[preLeft]);
        int inIdx = 0;
        for (int in = inLeft; in < inRight; in++) {
            if (inorder[in] == preorder[preLeft]) {
                inIdx = in - inLeft;
            }
        }
        node->left = build(preorder, inorder, preLeft+1, preLeft+1+inIdx, inLeft, inLeft+inIdx);
        node->right = build(preorder, inorder, preLeft+1+inIdx, preRight, inLeft+inIdx+1, inRight);
        return node;
    }
};

int main() {
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Solution slt;
    slt.buildTree(preorder, inorder);
}

