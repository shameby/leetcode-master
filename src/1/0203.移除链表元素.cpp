//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        auto hair = new ListNode(0, head);
        auto pre = hair;
        auto curr = head;
        while (curr != nullptr) {
            if (curr->val == val) {
                pre->next = curr->next;
                curr->next = nullptr;
                curr = pre->next;
            } else {
                pre = curr;
                curr = curr->next;
            }
        }
        return hair->next;
    }
};

int main() {
    vector<int> vec = {1,2,6,3,4,5,6};
    auto head = vecToList(vec);
    Solution s;
    printList(s.removeElements(head, 6));
}

