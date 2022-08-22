//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3) return n;
        int a1(2), a2(3);
        for (int i = 4; i <= n; i++) {
            int sum = a1+a2;
            a1=a2;
            a2=sum;
        }
        return a2;
    }
};

int main() {
    vector<int> fee = {1,3,2,8,4,9};
    Solution slt;
    auto res = slt.climbStairs(4);
    printInt(res);
}