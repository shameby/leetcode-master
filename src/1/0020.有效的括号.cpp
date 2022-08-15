//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk = {};
        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
                continue;
            }
            if (stk.size() == 0) return false;
            char top = stk.top();
            stk.pop();
            if (c == ')' && top != '(') return false;
            if (c == ']' && top != '[') return false;
            if (c == '}' && top != '{') return false;
        }
        return stk.size() == 0;
    }
};