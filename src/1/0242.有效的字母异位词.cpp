//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m = {};
        for (auto c: s) {
            m[c]++;
        }
        for (auto c1: t) {
            auto it = m.find(c1);
            if (it == m.end()) {
                return false;
            }
            if (m[c1] == 1) {
                m.erase(c1);
            } else {
                m[c1]--;
            }
        }
        return m.size() == 0;
    }
};

int main() {
    Solution slt;
    auto s = "anagram";
    auto t = "nagaram";
    cout << slt.isAnagram(s, t) << endl;
}

