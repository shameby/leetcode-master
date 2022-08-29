//
// Created by randy on 2022/8/25.
//


class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.size()+1, false);
        dp[0] = true;
        for (int i = 1; i <= s.size(); i++) {
            for (int j = 0; j < i; j++) {
                string word = s.substr(j, i - j);
                cout << word << endl;
                if (wordSet.find(word) != wordSet.end() && dp[j]) dp[i] = true;
            }
            printVec(dp);
        }
        return dp[s.size()];
    }
};

int main() {
    Solution slt;

    vector<string> nums = {"leet", "code"};
    auto res = slt.wordBreak("leetcode", nums);
    printInt(res);
}
