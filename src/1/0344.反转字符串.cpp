//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l(0), r(s.size()-1);
        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};

int main() {
    Solution slt;
    vector<char> v = {'a', 'p', 'p', 'l', 'e', ';'};
    slt.reverseString(v);
    printVec(v);
}

