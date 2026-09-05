class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=2*n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
            if(st.empty()){
                ans[i]=-1;
            }else{
                ans[i]=st.top();
            }
            }
            st.push(nums[i%n]);
        }
       
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna