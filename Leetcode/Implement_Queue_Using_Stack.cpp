class Queue {
    stack<int>S1;
    stack<int>S2;
public:
    // Push element x to the back of queue.
    void push(int x) {
        S1.push(x);
        
    }

    // Removes the element from in front of queue.
    void pop(void) {
        peek();
        S2.pop();
    }

    // Get the front element.
    int peek(void) {
        if(!S2.empty())
            return S2.top();
        while(!S1.empty())
        {
            S2.push(S1.top());
            S1.pop();
        }
        return S2.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return S1.empty() && S2.empty();
        
    }
};
