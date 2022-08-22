//
// Created by randy on 2022/8/19.
//

class Solution {
private:
    static bool compare(vector<int>& a, vector<int>& b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), compare);
        list<vector<int>> res;
        for (auto p: people) {
            int pos = p[1];
            auto it = res.begin();
            while (pos--) it++;
            res.insert(it, p);
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};

int main() {
    vector<vector<int>> people = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    Solution slt;
    auto res = slt.reconstructQueue(people);
    printDoubleVec(res);
}