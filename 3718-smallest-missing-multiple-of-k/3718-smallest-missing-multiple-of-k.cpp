class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        int ans=k, m=k, f=1;
        while(1){
            if(st.find(m) == st.end()){
                ans=m;
                break;
            }
            f++;
            m=k*f;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna