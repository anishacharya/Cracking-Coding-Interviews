//each element in stack is a pair of two int. The first is the int that we want to push into the stack. And the other one is the minimum value of the stack at this moment.

class MinStack {
private:
stack<pair<int, int>> sta;
public:
void push(int x) {
    if(sta.empty()) 
        sta.push(make_pair(x, x));
    else {
        auto top = sta.top();
        //sta.push(make_pair(x, x < top.second ? x : top.second));
        if(x<top.second)
            sta.push(make_pair(x,x));
         else sta.push(make_pair(x,top.second));
    
    }
}

void pop() {
    if(!sta.empty())
        sta.pop();
}

int top() {
    if(!sta.empty())
        return sta.top().first;
    else
        return -1;
}

int getMin() {
    if(!sta.empty())
        return sta.top().second;
    else 
        return -1;
}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
