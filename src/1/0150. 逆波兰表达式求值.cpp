//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk = {};
        for (auto s : tokens) {
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                stk.push(atoi(s.c_str()));
                continue;
            }
            int sec = stk.top();
            stk.pop();
            int fst = stk.top();
            stk.pop();
            if (s == "+") {
                stk.push(fst + sec);
            } else if (s == "-"){
                stk.push(fst - sec);
            } else if ( s == "*") {
                stk.push(fst * sec);
            } else {
                stk.push(fst / sec);
            }
        }
        return stk.top();
    }
};