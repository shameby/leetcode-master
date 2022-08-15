//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            if (i + k < s.size()) {
                reverseVec(s, i, i+k);
            } else {
                reverseVec(s, i, s.size());
            }
        }
        return s;
    }

    void reverseVec(string& vec, int start, int end) {
        int l(start), r(end-1);
        while (l < r) {
            swap(vec[l], vec[r]);
            l++;
            r--;
        }
    }
};