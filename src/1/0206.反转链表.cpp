//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;


class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *hair = nullptr;
        auto pre(hair), curr(head);
        while (curr) {
            auto nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
    }
};

int main() {
    vector<int> vec = {1, 2, 6, 3, 4, 5, 6};
    auto head = vecToList(vec);
    Solution s;
    printList(s.reverseList(head));
}

