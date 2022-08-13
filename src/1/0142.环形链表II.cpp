//
// Created by randy on 2022/8/11.

#include <iostream>
#include <vector>
#include "utils.cpp"

using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto fast = head;
        auto slow = head;
        while (fast != nullptr && fast->next != nullptr ) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                while (head != slow) {
                    head = head->next;
                    slow = slow->next;
                }
                return head;
            }
        }
        return nullptr;
    }
};

int main() {
    vector<int> vec = {1, 2, 6, 3, 4, 5, 6};
    auto head = vecToList(vec);
    Solution s;
    printInt(s.detectCycle(head)->val);
}

