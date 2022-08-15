//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res = {};
        if (root == nullptr) return res;
        queue<Node*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> vec = {};
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                vec.push_back(curr->val);
                for (auto child: curr->children) {
                    q.push(child);
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};