//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<string> res = {};
    string tmp = {};
    static unordered_map<char, vector<char>> m;
    void backtracking(string& digits, int len) {
        if (len == digits.size()) {
            if (len > 0) res.push_back(tmp);
            return;
        }
        for (auto c: m[digits[len]]) {
            tmp.push_back(c);
            backtracking(digits, len+1);
            tmp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        backtracking(digits, 0);
        return res;
    }
};

unordered_map<char, vector<char>> Solution::m = {
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}}
};