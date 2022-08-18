//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<string>> res = {};
    vector<string> tmp = {};

    bool isCir(string &s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void backtracking(string &s, int idx) {
        if (idx == s.size()) {
            res.push_back(tmp);
            return;
        }
        for (int end = idx; end < s.size(); end++) {
            if (isCir(s, idx, end)) {
                tmp.push_back(s.substr(idx, end - idx + 1));
                backtracking(s, end+1);
                tmp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        backtracking(s, 0);
        return res;
    }
};