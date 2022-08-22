//
// Created by randy on 2022/8/22.
//

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int a1(0), a2(1);
        for (int i = 2; i <= n; i++) {
            int sum = a1 + a2;
            a1 = a2;
            a2 = sum;
        }
        return a2;
    }
};

int main() {
    vector<int> fee = {1,3,2,8,4,9};
    Solution slt;
    auto res = slt.fib(4);
    printInt(res);
}
