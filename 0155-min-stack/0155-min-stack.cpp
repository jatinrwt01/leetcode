class MinStack {
private:
    int currmin=INT_MAX;
    stack<long long>minst;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(minst.empty()){
            minst.push(value);
            currmin=value;
        }
        else if(value < currmin){
            long long enc=(2LL*value-currmin);
            minst.push(enc);
            currmin=value;
        }
        else{
            minst.push(value);
        }
    }
    
    void pop() {
        if(minst.top()<currmin){
        long long dec=(2LL*currmin)-minst.top();
        currmin=dec;
        }
        minst.pop();
    }
    
    int top() {
        if(minst.top()<currmin){
            return currmin;
        }
        return minst.top();
    }
    
    int getMin() {
        return currmin;
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