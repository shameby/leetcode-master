//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    string replaceSpace(string s) {
        int cnt = 0;
        for (auto c: s) {
            if (c == ' ') {
                cnt++;
            }
        }
        int old_size = s.size();
        s.resize(old_size + 2 * cnt);
        int curr(old_size-1), tail(old_size-1);
        while(curr >= 0) {
            if (s[curr] == ' ') {
                int tmp = tail;
                while (tmp > curr) {
                    s[tmp + 2] = s[tmp];
                    tmp--;
                }
                s[curr] = '%';
                s[curr+1] = '2';
                s[curr+2] = '0';
                tail += 2;
            }
            curr--;
        }
        return s;
    }
};