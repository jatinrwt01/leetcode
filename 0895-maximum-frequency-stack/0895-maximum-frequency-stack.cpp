class FreqStack {
private:
    unordered_map<int,int>mp;
    unordered_map<int,stack<int>>mst;
    int maxF;
public:
    FreqStack() {
        maxF=INT_MIN;
    }
    
    void push(int val) {
        mp[val]++;
        maxF=max(maxF, mp[val]);
        mst[mp[val]].push(val);
    }
    
    int pop() {
        int el= mst[maxF].top();
        mst[maxF].pop();
        mp[el]--;
        if(mst[maxF].empty()){
        maxF--;
        }
        return el;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna