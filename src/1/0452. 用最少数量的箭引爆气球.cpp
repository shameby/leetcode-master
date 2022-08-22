//
// Created by randy on 2022/8/19.
//

class Solution {
private:
    static bool compare(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end(), compare);
        int cnt = 1;
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > points[i-1][1]) cnt++;
            else points[i][1] = min(points[i][1], points[i-1][1]);
        }
        return cnt;
    }
};

int main() {
    vector<vector<int>> people = {{10,16},{2,8},{1,6},{7,12}};
    Solution slt;
    auto res = slt.findMinArrowShots(people);
    printInt(res);
}

