//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<string> res = {};
    vector<string> ip = {};

    bool isValid(string& s, int start, int end) {
        if (end > start && s[start] == '0') return false;
        string numStr = s.substr(start, end-start+1);
        int num = atoi(numStr.c_str());
        if (num >= 0 && num <= 255) return true;
        return false;
    }

    void backTracking(string& s, int idx, int cnt) {
        if (cnt == 4 && idx == s.size()) {
            string ipStr;
            for (int i = 0; i < 4; i++) {
                ipStr += ip[i];
                if (i != 3) {
                    ipStr += ".";
                }
            }
            res.push_back(ipStr);
            return;
        }
        for (int end = idx; end < s.size() && end < idx+3; end++) {
            if (isValid(s, idx, end)) {
                auto str = s.substr(idx, end-idx+1);
                ip.push_back(str);
                backTracking(s, end+1, cnt+1);
                ip.pop_back();
            }
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        backTracking(s, 0, 0);
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> a = {10, 1, 2, 7, 6, 1, 5};
    auto vec = slt.restoreIpAddresses("25525511135");
    printVec(vec);
}

