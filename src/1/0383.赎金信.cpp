//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m = {};
        for (auto mg: magazine) {
            m[mg]++;
        }
        for (auto rn: ransomNote) {
            auto iter = m.find(rn);
            if (iter == m.end()) {
                return false;
            }
            if (m[rn] == 0) {
                return false;
            }
            m[rn]--;
        }
        return true;
    }
};

int main() {
    Solution slt;
    auto res = slt.canConstruct("aa", "aab");
    printInt(res);
}

