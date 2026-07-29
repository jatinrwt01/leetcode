class Solution {
private:
    int helper(int i, int sum,vector<int>&nums, int n, int ts, vector<vector<int>>&dp){
        if(i < 0){
            return abs(2*sum - ts);
        }
        if(dp[i][sum] != -1){
            return dp[i][sum];
        }
        int left = helper(i-1, sum+nums[i], nums, n, ts,dp); 
        int right = helper(i-1, sum,nums, n, ts,dp);
        return dp[i][sum]=min(left,right);
    }
public:
    int lastStoneWeightII(vector<int>& stones) {
        int ts=0, n=stones.size();
        for(int i=0; i<n; i++){
            ts+=stones[i];
        }
        vector<vector<int>>dp(n, vector<int>(ts+1, -1));
        return helper(n-1, 0, stones, n, ts, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna