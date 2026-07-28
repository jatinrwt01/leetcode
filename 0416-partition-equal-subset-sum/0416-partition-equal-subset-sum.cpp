class Solution {
private:
    bool helper(int i, int k, vector<int>&nums, vector<vector<int>>&dp){
        if(k == 0){
            return true;
        }
        if(i == 0){
            return nums[i] == k;
        }
        if(dp[i][k] != -1) return dp[i][k];
        bool p = false;
        if(nums[i]<=k){
            p =helper(i-1, k-nums[i], nums, dp);
        }
        bool np = helper(i-1, k, nums, dp);
        return dp[i][k] = p||np;
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0, n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        if(sum%2 != 0){
            return false;
        } 
        int k=sum/2;
        vector<vector<int>>dp(n+1, vector<int>(k+1, -1));
        return helper(n-1, k, nums, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna