//
// Created by randy on 2022/8/12.
//

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printVec(vector<T>& list) {
    for (int idx = 0; idx < list.size(); idx++) {
        cout << list[idx];
        if (idx != list.size() -1) {
            cout << ",";
        }
    }
    cout << endl;
}

void printDoubleVec(vector<vector<int>>& list) {
    for (int idx = 0; idx < list.size(); idx++) {
        for (int j =0 ; j < list[idx].size(); j++) {
            cout << list[idx][j];
            if (j != list[idx].size() -1) {
                cout << ",";
            }
        }
        cout << endl;
    }
    cout << endl;
}

template <class T>
void printInt(T a) {
    cout << a << endl;
}

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    auto curr = head;
    while(curr->next != nullptr) {
        cout << curr->val << ",";
        curr = curr->next;
    }
    cout << curr->val << endl;
}

ListNode* vecToList(const vector<int>& vec) {
    auto hair = new ListNode();
    auto curr = hair;
    for (int i : vec) {
        auto t = new ListNode(i);
        curr->next = t;
        curr = t;
    }
    return hair->next;
}