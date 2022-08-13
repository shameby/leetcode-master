//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int res = 0;
        unordered_map<int, int> m1_2 = {};
        for (auto n1: nums1) {
            for (auto n2: nums2) {
                m1_2[n1+n2]++;
            }
        }
        for (auto n3: nums3) {
            for (auto n4: nums4) {
                auto iter = m1_2.find(-n3-n4);
                if (iter != m1_2.end()) {
                    res += m1_2[-n3-n4];
                }
            }
        }
        return res;
    }
};

int main() {
    Solution slt;
    vector<int> vec1 = {1,2};
    vector<int> vec2 = {-2,-1};
    vector<int> vec3 = {-1,2};
    vector<int> vec4 = {0,2};
    auto res = slt.fourSumCount(vec1, vec2, vec3, vec4);
    printInt(res);
}

