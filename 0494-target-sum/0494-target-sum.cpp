class Solution {
private:
    int f(int i, int ev, int target,int sum, vector<int>&nums, vector<vector<int>>&dp){
        int n=nums.size();
        if(i == n){
            if(ev==target){
                return 1;
            }
            return 0;
        }
        if(dp[i][ev+sum] != -1){
            return dp[i][ev+sum];
        }
        int m=f(i+1, ev+((-1)*nums[i]), target, sum,nums,dp);
        int p=f(i+1, ev+nums[i], target, sum, nums,dp);
        return dp[i][ev+sum]=m+p;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ev=0;
        int sum=0;
        int n=nums.size();
        for(int num:nums){
            sum+=num;
        }
        vector<vector<int>>dp(n+1, vector<int>(2*sum+1, -1));
        return f(0, ev, target,sum, nums, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna