//
// Created by randy on 2022/8/20.
//

class Solution {
private:
    static bool compare(pair<int, int>& a, pair<int, int>& b) {
        return a.first < b.first;
    }
public:
    vector<int> partitionLabels(string s) {
        if (s.size() == 1) return {1};
        unordered_map<char, pair<int, int>> m;
        for (int i = 0; i < s.size(); i++) {
            auto iter = m.find(s[i]);
            if (iter == m.end()) m[s[i]] = {i, i};
            else {
                m[s[i]].second = i;
            }
        }
        vector<pair<int, int>> arr;
        arr.reserve(m.size());
        for (auto it: m) {
            arr.push_back(it.second);
        }
        // printDoublePair(arr);
        vector<int> res = {};
        sort(arr.begin(), arr.end(), compare);
        int start(arr[0].first), end(arr[0].second);
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i].first < end) {
                end = max(arr[i].second, end);
            } else {
                res.push_back(end-start+1);
                start = arr[i].first;
                end = arr[i].second;
            }
        }
        res.push_back(end-start+1);
        return res;
    }
};

int main() {
    vector<vector<int>> people = {{10,16},{2,8},{1,6},{7,12}};
    Solution slt;
    auto res = slt.partitionLabels("ababcbacadefegdehijhklij");
    printVec(res);
}

