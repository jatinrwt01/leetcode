class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, INT_MIN);
        dp[0] = nums[0];
        int neg=0;
        for(int i=1; i<n; i++){
            dp[i] = max(nums[i]+ ((i>1) ? dp[i-2] : neg) ,dp[i-1]);
        }
        return dp[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna