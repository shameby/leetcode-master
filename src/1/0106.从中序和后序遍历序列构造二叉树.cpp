//
// Created by randy on 2022/8/17.
//

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTreeIn(inorder, postorder, 0, inorder.size(), 0, postorder.size());
    }

    TreeNode* buildTreeIn(vector<int>& inorder, vector<int>& postorder, int inLeft, int inRight, int postLeft, int postRight) {
        cout << inLeft << "," << inRight << ";" << postLeft << "," << postRight << endl;
        if (inLeft == inRight) return nullptr;
        if (inLeft + 1 == inRight) return new TreeNode(inorder[inLeft]);
        auto n = new TreeNode(postorder[postRight-1]);
        int in_idx = inLeft;
        for (int in = inLeft; in < inRight; in++) {
            if (inorder[in] == postorder[postRight-1]) {
                in_idx = in - inLeft;
                break;
            }
        }
        n->left = buildTreeIn(inorder, postorder, inLeft, inLeft + in_idx, postLeft, postLeft + in_idx);
        n->right = buildTreeIn(inorder, postorder, inLeft+in_idx+1, inRight, postLeft+in_idx, postRight-1);
        return n;
    }
};

int main() {
    vector<int> inorder = {9,3,15,20,7};
    vector<int> postorder = {9,15,7,20,3};
    Solution slt;
    slt.buildTree(inorder, postorder);
}