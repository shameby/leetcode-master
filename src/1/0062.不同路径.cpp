//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1) return 1;
        vector<int> path(n, 1);
        for (int row = 1; row < m; row++) {
            for (int col = 1; col < n; col++) {
                path[col] += path[col-1];
            }
        }
        return path[n-1];
    }
};

int main() {
    vector<int> fee = {1,100};
    Solution slt;
    auto res = slt.uniquePaths(3,7);
    printInt(res);
}
