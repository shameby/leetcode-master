//
// Created by randy on 2022/8/16.
//

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return 0;
        int depth = 0;
        queue<Node*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                for (auto child: curr->children) {
                    q.push(child);
                }
            }
            depth++;
        }
        return depth;
    }
};