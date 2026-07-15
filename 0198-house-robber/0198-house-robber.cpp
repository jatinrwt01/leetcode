class Solution {
private:
    int f(int i, vector<int>&nums, vector<int> &dp){
        if(i == 0) return nums[0];
        if(i<0) return 0;
        if(dp[i]!=INT_MIN){
            return dp[i];
        }
        int p = nums[i]+f(i-2, nums, dp);
        int np = 0 + f(i-1, nums, dp);
        return dp[i] = max(p,np);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, INT_MIN);
        return f(n-1, nums, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna