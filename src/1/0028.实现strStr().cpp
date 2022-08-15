//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        int idx = 0;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[idx]) {
                int start = i;
                while (haystack[i] == needle[idx] && i < haystack.size()) {
                    cout << i << idx << start << endl;
                    i++;
                    idx++;
                    if (idx == needle.size()) return start;
                }
                i = start;
                idx = 0;
            }
        }
        return -1;
    }
};