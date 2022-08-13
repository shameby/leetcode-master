//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start(0), end(nums.size()-1);
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> list = {-1, 0, 1, 2, 4, 7, 9};
    auto res = s.search(list, 3);
    cout << res << endl;
}