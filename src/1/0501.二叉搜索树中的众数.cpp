//
// Created by randy on 2022/8/17.
//

class Solution {
private:
    int maxCount; // 最大频率
    int count; // 统计频率
    TreeNode* pre = nullptr;
    vector<int> result = {};
    void searchBST(TreeNode* cur) {
        if (cur == nullptr) return ;

        searchBST(cur->left);       // 左
        // 中
        if (pre == nullptr) { // 第一个节点
            count = 1;
        } else if (pre->val == cur->val) { // 与前一个节点数值相同
            count++;
            cout << pre->val << "," << cur->val << ":" << count << endl;
        } else { // 与前一个节点数值不同
            count = 1;
            cout << pre->val << "," << cur->val << ":" << count << endl;
        }
        pre = cur; // 更新上一个节点

        if (count == maxCount) { // 如果和最大值相同，放进result中
            result.push_back(cur->val);
        }

        if (count > maxCount) { // 如果计数大于最大值频率
            maxCount = count;   // 更新最大频率
            result.clear();     // 很关键的一步，不要忘记清空result，之前result里的元素都失效了
            result.push_back(cur->val);
        }

        searchBST(cur->right);      // 右
    }

public:
    vector<int> findMode(TreeNode* root) {
        count = 0;
        maxCount = 0;
        pre = nullptr; // 记录前一个节点
        result.clear();

        searchBST(root);
        return result;
    }
};
