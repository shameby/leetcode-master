//
// Created by randy on 2022/8/11.

#include <vector>
#include <stack>
#include <string>
#include <list>
#include <unordered_map>
#include <algorithm>
#include <map>
#include "utils.cpp"

using namespace std;

class Solution {
private:
    int res;
private:
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

int main() {
   /* vector<int> fee = {1,3,2,8,4,9};
    Solution slt;
    auto res = slt.maxProfit(fee, 2);
    printInt(res);*/
}

