//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    string reverseWords(string s) {
        removeBlank(s);
        reverseSlice(s, 0, s.size());
        return s;
    }

    void removeBlank(string& s) {
        int slow = 0;
        for (int fast = 0; fast < s.size(); fast++) {
            if (s[fast] != ' ') {
                if (slow != 0) s[slow++] = ' ';
                int start = slow;
                while (fast < s.size() && s[fast] != ' ') {
                    s[slow++] = s[fast++];
                }
                int end = slow;
                reverseSlice(s, start, end);
            }
        }
        s.resize(slow);
    }

    void reverseSlice(string& s, int start, int end) {
        int l(start), r(end-1);
        while (l < r) {
            swap(s[l++], s[r--]);
        }
    }
};