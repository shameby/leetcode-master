//
// Created by randy on 2022/8/22.
//

class Solution {
private:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 1) return intervals;
        sort(intervals.begin(), intervals.end(), compare);
        vector<vector<int>> res = {};
        int start(intervals[0][0]), end(intervals[0][1]);
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= end) end = max(end, intervals[i][1]);
            else {
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        res.push_back({start, end});
        return res;
    }
};

int main() {
    vector<vector<int>> people = {{1,3},{2,6},{8,10},{15,18}};
    Solution slt;
    auto res = slt.merge(people);
    printDoubleVec(res);
}
