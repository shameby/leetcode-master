//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1) return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<int> path(n, 0);
        path[0] = 1;
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (obstacleGrid[row][col] == 1) {path[col] = 0; continue;}
                if (col == 0) {path[col] == 0 ? path[col] = 0 : 1 ; continue;}
                path[col] += path[col-1];
            }
            // printVec(path);
        }
        return path[n-1];
    }
};

int main() {
    vector<vector<int>> obstacleGrid = {
            {0,0},
            {1,1},
            {0,0}
    };
    Solution slt;
    auto res = slt.uniquePathsWithObstacles(obstacleGrid);
    printInt(res);
}