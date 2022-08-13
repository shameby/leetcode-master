//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        auto hair = new ListNode(0, head);
        auto curr = hair;
        while (curr->next != nullptr && curr->next->next != nullptr) {
            auto first = curr->next;
            auto secend = first->next;
            auto nxt = secend->next;
            curr->next = secend;
            secend->next = first;
            first->next = nxt;
            curr = first;
        }
        return hair->next;
    }
};

int main() {
    vector<int> vec = {1, 2, 6, 3, 4, 5, 6};
    auto head = vecToList(vec);
    Solution s;
    printList(s.swapPairs(head));
}

