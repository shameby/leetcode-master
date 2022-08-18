//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    unordered_map<char, bool> row_m[9];
    unordered_map<char, bool> col_m[9];
    unordered_map<char, bool> box_m[9];
    int whichBox(int row, int col) {
        return (row / 3) * 3 + col / 3;
    }
    pair<int,int> next(int row, int col) {
        if (col < 8) return {row, col+1};
        return {row+1, 0};
    }

    bool blackTracking(vector<vector<char>>& board, int row, int col) {
        if (row == 9) {
            return true;
        }
        auto nxt = next(row, col);
        auto box = whichBox(row, col);
        if (board[row][col] != '.') {
            if (blackTracking(board, nxt.first, nxt.second)) return true;
        } else {
            for (char i = '1'; i <= '9'; i++) {
                if (row_m[row][i] || col_m[col][i] || box_m[box][i]) continue;
                board[row][col] = i;
                row_m[row][i] = true;
                col_m[col][i] = true;
                box_m[box][i] = true;
                if (blackTracking(board, nxt.first, nxt.second)) return true;
                board[row][col] = '.';
                row_m[row][i] = false;
                col_m[col][i] = false;
                box_m[box][i] = false;
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] != '.') {
                    auto box = whichBox(row, col);
                    row_m[row][board[row][col]] = true;
                    col_m[col][board[row][col]] = true;
                    box_m[box][board[row][col]] = true;
                }
            }
        }
        blackTracking(board, 0, 0);
    }
};

int main() {
    Solution slt;
    vector<vector<char>> board = {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    slt.solveSudoku(board);
    printDoubleVec(board);
}
