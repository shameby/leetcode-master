//
// Created by randy on 2022/8/11.

#include <iostream>
#include <unordered_map>
#include <vector>
#include "utils.cpp"
using namespace std;

class Solution {
public:
    int getSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int, bool> m = {};
        while (n != 1) {
            if (m[n]) {
                return false;
            }
            m[n] = true;
            n = this->getSum(n);
        }
        return true;
    }
};

int main() {
    Solution slt;
    cout << slt.isHappy(19) << endl;
}

