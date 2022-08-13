//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto hair = new ListNode(0, head);
        auto fast = hair;
        auto slow = hair;
        for (int i = 0; i < n-1; i++) {
            fast = fast->next;
        }
        while (fast->next->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        auto t = slow->next;
        slow->next = t->next;
        t->next = nullptr;
        return hair->next;
    }
};

int main() {
    vector<int> vec = {1, 2, 6, 3, 4, 5, 6};
    auto head = vecToList(vec);
    Solution s;
    printList(s.removeNthFromEnd(head, 2));
}

