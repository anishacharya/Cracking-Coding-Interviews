class Stack {
    queue<int>S;
public:
    // Push element x onto stack.
    void push(int x) {
        unsigned int size=S.size();
        S.push(x);
        while(size--)
        {
            S.push(S.front());
            S.pop();
        }
        
    }

    // Removes the element on top of the stack.
    void pop() {
        S.pop();
        
    }

    // Get the top element.
    int top() {
        return S.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return S.empty();
        
    }
};
