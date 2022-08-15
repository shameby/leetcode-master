//
// Created by randy on 2022/8/15.
//

class MyQueue {
public:
    stack<int> s_input;
    stack<int> s_output;
    MyQueue() {
        s_input = {};
        s_output = {};
    }

    void push(int x) {
        s_input.push(x);
    }

    int pop() {
        if (s_output.empty()) {
            while (!s_input.empty()) {
                s_output.push(s_input.top());
                s_input.pop();
            }
        }
        int res = s_output.top();
        s_output.pop();
        return res;
    }

    int peek() {
        int res = pop();
        s_output.push(res);
        return res;
    }

    bool empty() {
        return s_input.empty() && s_output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */