//
// Created by randy on 2022/8/13.
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA(0), lenB(0);
        auto currA = headA;
        auto currB = headB;
        while (currA != nullptr) {
            currA = currA->next;
            lenA++;
        }
        while (currB != nullptr) {
            currB = currB->next;
            lenB++;
        }
        int n = lenA - lenB;
        if (n < 0) {
            auto t = headB;
            headB = headA;
            headA = t;
            n = -n;
        }
        for (int i = 0; i<n; i++) {
            headA = headA->next;
        }
        while (headA != nullptr) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};