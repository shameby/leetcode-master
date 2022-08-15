//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        n = n % s.size();
        reverseSlice(s, 0, s.size());
        reverseSlice(s, 0, s.size()-n);
        reverseSlice(s, s.size()-n, s.size());
        return s;
    }

    void reverseSlice(string& s, int start, int end) {
        int l(start), r(end-1);
        while (l < r) {
            swap(s[l++], s[r--]);
        }
    }
};