//
// Created by randy on 2022/8/19.
//

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num_5 = 0;
        int num_10 = 0;
        for (auto bill: bills) {
            if (bill == 5) {
                num_5++;
            } else if (bill == 10) {
                num_5--;
                num_10++;
            } else if (bill == 20) {
                if (num_10 > 0) {num_10--; num_5--;}
                else num_5-=3;
            }
            if (num_5 < 0) return false;
        }
        return true;
    }
};

int main() {
    vector<int> gas = {5,5,5,20,5,5,5,20,5,5,5,10,5,20,10,20,10,20,5,5};
    vector<int> cost = {3,4,5,1,2};
    Solution slt;
    printInt(slt.lemonadeChange(gas));
}

