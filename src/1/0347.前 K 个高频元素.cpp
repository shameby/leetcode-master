//
// Created by randy on 2022/8/15.
//

class Solution {
public:
    class myCmpr {
    public:
        bool operator() (const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m = {};
        for (auto i: nums) {
            m[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, myCmpr> pri_q;
        for (auto it: m) {
            if (pri_q.size() < k || it.second > pri_q.top().second) {
                pri_q.push(it);
            }
            if (pri_q.size() > k) pri_q.pop();
        }
        vector<int> res = {};
        while (!pri_q.empty()) {
            res.push_back(pri_q.top().first);
            pri_q.pop();
        }
        return res;
    }
};