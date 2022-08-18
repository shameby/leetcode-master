//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<vector<string>> res;
    vector<vector<int>> skt;

    bool isValid(const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0] || a[1] == b[1]) return false;
        if (a[0]-b[0] == a[1]-b[1] || a[0]-b[0] == -(a[1]-b[1])) return false;
        return true;
    }

    void backTracking(int n, int lvl) {
        if (lvl == n) {
            vector<string> tmp(n, string(n, '.'));
            for (auto arr : skt) {
                tmp[arr[0]][arr[1]] = 'Q';
            }
            res.push_back(tmp);
            return;
        }
        for (int col = 0; col < n; col++) {
            vector<int> curr = {lvl, col};
            bool isV = true;
            for (auto& arr: skt) {
                if (!isValid(arr, curr)) isV = false;
            }
            if (isV) {
                skt.push_back(curr);
                backTracking(n, lvl+1);
                skt.pop_back();
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        backTracking(n, 0);
        return res;
    }
};