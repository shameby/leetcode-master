//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk = {};
        for (auto c: s) {
            if (stk.empty() || c != stk.top()) {
                stk.push(c);
                continue;
            }
            stk.pop();
        }
        string res = "";
        while (!stk.empty()) {
            res.push_back(stk.top());
            stk.pop();
        }
        int i(0), j(res.size()-1);
        while (i < j) {
            swap(res[i++], res[j--]);
        }
        return res;
    }
};