//
// Created by randy on 2022/8/18.
//

class Solution {
private:
    vector<string> path = {"JFK"};
    unordered_map<string, map<string, int>> towards = {};
    bool backTracking(vector<vector<string>> &tickets, string from) {
        if (path.size() == tickets.size() + 1) {
            return true;
        }
        for (auto& toIter: towards[from]) {
            if (toIter.second > 0) {
                path.push_back(toIter.first);
                toIter.second--;
                if (backTracking(tickets, toIter.first)) return true;
                toIter.second++;
                path.pop_back();
            }
        }
        return false;
    }
public:
    vector<string> findItinerary(vector<vector<string>> &tickets) {
        for (auto & ticket : tickets) {
            towards[ticket[0]][ticket[1]]++;
        }
        backTracking(tickets, "JFK");
        return path;
    }
};

int main() {
    Solution slt;
    vector<vector<string>> tickets = {
            {"JFK","KUL"},{"JFK","NRT"},{"NRT","JFK"}
    };
    auto vec = slt.findItinerary(tickets);
    printVec(vec);
}