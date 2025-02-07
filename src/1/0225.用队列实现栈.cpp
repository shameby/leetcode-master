//
// Created by randy on 2022/8/15.
//

class MyStack {
public:
    queue<int> q;
    MyStack() {
        q = {};
    }

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int size = q.size();
        while (size > 1) {
            q.push(q.front());
            q.pop();
            size--;
        }
        int res = q.front();
        q.pop();
        return res;
    }

    int top() {
        return q.back();
    }

    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */