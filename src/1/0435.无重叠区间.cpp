//
// Created by randy on 2022/8/19.
//

class Solution {
private:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() <= 1) return 0;
        sort(intervals.begin(), intervals.end(), compare);
        int move_cnt = 0;
        int curr_right = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < curr_right) {
                move_cnt++;
            } else {
                curr_right = intervals[i][1];
            }
        }
        return move_cnt;
    }
};

int main() {
    vector<vector<int>> people = {{10,16},{2,8},{1,6},{7,12}};
    Solution slt;
    auto res = slt.eraseOverlapIntervals(people);
    printInt(res);
}