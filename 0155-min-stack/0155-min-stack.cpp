class MinStack {
private:
    stack<int>st;
    stack<int>minSt;
public:
    MinStack() {
       
    }
    
    void push(int value) {
        minSt.push(value);
        if(st.empty() || (value<=st.top())){
            st.push(value);
        }
    }
    
    void pop() {
        if(minSt.top() == st.top()){
            st.pop();
        }
        minSt.pop();
    }
    
    int top() {
        if(minSt.empty()){
            return -1;
        }
        return minSt.top();
    }
    
    int getMin() {
        if(!st.empty()){
        return st.top();
        }
    return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna