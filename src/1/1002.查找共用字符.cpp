//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res = {};
        unordered_map<char, vector<int>> m = {};
        for (int i = 0; i < words.size(); i++) {
            for (auto c: words[i]) {
                auto it = m.find(c);
                if (it == m.end()) {
                    m[c] = vector<int>(words.size(), 0);
                }
                m[c][i]++;
            }
        }
        for (auto [c, cnt_list]: m) {
            int min_cnt = INT32_MAX;
            for (auto cnt: cnt_list) {
                if (cnt < min_cnt) {
                    min_cnt = cnt;
                }
            }
            for (int j = 0; j < min_cnt; j++) {
                string str;
                str.push_back(c);
                res.push_back(str);
            }
        }
        return res;
    }
};

int main() {
    Solution slt;
    vector<string> vec = {"bella","label","roller"};
    auto a = slt.commonChars(vec);
    printVec(a);
}

