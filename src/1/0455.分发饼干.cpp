//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int child = g.size()-1; child >=0; child--) {
            if (s.empty()) break;
            if (s[s.size()-1] >= g[child]) {
                cnt++;
                s.pop_back();
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};
    Solution slt;
    printInt(slt.findContentChildren(g, s));
}
