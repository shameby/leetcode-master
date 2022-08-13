//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = {};
        unordered_map<int, bool> m = {};
        for (auto n1: nums1) {
            m[n1] = true;
        }
        for (auto n2: nums2) {
            if (m[n2]) {
                m[n2] = false;
                res.push_back(n2);
            }
        }
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> vec1 = {4,9,5};
    vector<int> vec2 = {9,4,9,8,4};
    auto a = slt.intersection(vec1, vec2);
    printVec(a);
}

