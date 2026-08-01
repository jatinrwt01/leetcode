class Solution {
private:
    int f(int i, int j, vector<int>&nums, vector<vector<int>>&dp){
        if(i == j){
            return nums[i];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int l = nums[i]-f(i+1, j,nums,dp);
        int r = nums[j]-f(i,j-1, nums,dp);
        return dp[i][j] = max(l,r);
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        int res= f(0, n-1, nums, dp);
        return res>=0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna