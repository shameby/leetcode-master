//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) return nullptr;
        queue<Node*> q = {};
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            Node* pre = nullptr;
            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();
                if (pre != nullptr) pre->next = curr;
                if (curr->left != nullptr) q.push(curr->left);
                if (curr->right != nullptr) q.push(curr->right);
                pre = curr;
            }
        }
        return root;
    }
};