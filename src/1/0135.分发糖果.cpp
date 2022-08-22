//
// Created by randy on 2022/8/19.
//

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> c(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i-1]) c[i] = c[i-1]+1;
        }
        int sum = c[ratings.size()-1];
        for (int i = ratings.size()-2; i >=0; i--) {
            if (ratings[i] > ratings[i+1]) c[i] = max(c[i], c[i+1]+1);
            sum += c[i];
        }
        printVec(c);
        return sum;
    }
};

int main() {
    vector<int> gas = {1,2,3,5,4,3,2};
    vector<int> cost = {3,4,5,1,2};
    Solution slt;
    printInt(slt.candy(gas));
}

