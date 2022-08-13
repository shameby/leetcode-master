//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int t(1), curr_n(0);
        while (curr_n <= n) {
            int i(curr_n), j(curr_n);
            while (i < (n - curr_n)) {
                res[j][i] = t;
                i++;
                t++;
            }
            i--;
            j++;
            while (j < (n-curr_n)) {
                res[j][i] = t;
                j++;
                t++;
            }
            j--;
            i--;
            while (i >= curr_n) {
                res[j][i] = t;
                i--;
                t++;
            }
            i++;
            j--;
            while (j > curr_n) {
                res[j][i] = t;
                j--;
                t++;
            }
            curr_n++;
        }
        return res;
    }
};

int main() {
    Solution s;
    auto res = s.generateMatrix(5);
    printDoubleVec(res);
}

