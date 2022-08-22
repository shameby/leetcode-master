//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        auto nStr = to_string(n);
        if (nStr.size() == 1) return n-1 < 0 ? 0: n -1;
        int flag = nStr.size();
        for (int i = nStr.size()-2; i >= 0; i--) {
            if (nStr[i] > nStr[i+1]) {
                nStr[i]--;
                flag = i+1;
            }
        }
        for (int i = flag; i < nStr.size(); i++) {
            nStr[i] = '9';
        }
        return stoi(nStr);
    }
};

int main() {
    vector<vector<int>> people = {{1,3},{2,6},{8,10},{15,18}};
    Solution slt;
    auto res = slt.monotoneIncreasingDigits(332);
    printInt(res);
}